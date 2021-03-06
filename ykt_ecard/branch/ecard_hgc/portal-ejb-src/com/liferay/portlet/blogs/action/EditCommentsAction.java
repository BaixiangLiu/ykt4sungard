/**
 * Copyright (c) 2000-2005 Liferay, LLC. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

package com.liferay.portlet.blogs.action;

import com.liferay.portal.auth.PrincipalException;
import com.liferay.portal.struts.PortletAction;
import com.liferay.portal.util.Constants;
import com.liferay.portlet.blogs.NoSuchCommentsException;
import com.liferay.portlet.blogs.NoSuchEntryException;
import com.liferay.portlet.blogs.service.spring.BlogsCommentsServiceUtil;
import com.liferay.portlet.blogs.service.spring.BlogsPropsServiceUtil;
import com.liferay.util.ParamUtil;
import com.liferay.util.Validator;
import com.liferay.util.servlet.SessionErrors;

import javax.portlet.ActionRequest;
import javax.portlet.ActionResponse;
import javax.portlet.PortletConfig;

import javax.servlet.jsp.PageContext;

import org.apache.struts.action.ActionForm;
import org.apache.struts.action.ActionMapping;

/**
 * <a href="EditCommentsAction.java.html"><b><i>View Source</i></b></a>
 *
 * @author  Brian Wing Shun Chan
 * @version $Revision: 1.5 $
 *
 */
public class EditCommentsAction extends PortletAction {

	public void processAction(
			ActionMapping mapping, ActionForm form, PortletConfig config,
			ActionRequest req, ActionResponse res)
		throws Exception {

		String cmd = req.getParameter(Constants.CMD);

		if (cmd != null && cmd.equals(Constants.ADD)) {
			try {
				_addComments(req, res);
			}
			catch (Exception e) {
				if (e != null &&
					e instanceof NoSuchEntryException ||
					e instanceof PrincipalException) {

					SessionErrors.add(req, e.getClass().getName());

					setForward(req, "portlet.blogs.error");
				}
				else {
					req.setAttribute(PageContext.EXCEPTION, e);

					setForward(req, Constants.COMMON_ERROR);
				}
			}
		}
		else {
			try {
				_deleteComments(req, res);
			}
			catch (Exception e) {
				if (e != null &&
					e instanceof NoSuchCommentsException ||
					e instanceof PrincipalException) {

					SessionErrors.add(req, e.getClass().getName());

					setForward(req, "portlet.blogs.error");
				}
				else {
					req.setAttribute(PageContext.EXCEPTION, e);

					setForward(req, Constants.COMMON_ERROR);
				}
			}
		}
	}

	private void _addComments(ActionRequest req, ActionResponse res)
		throws Exception {

		String entryId = ParamUtil.getString(req, "entry_id");

		int props = ParamUtil.getInteger(req, "props_quantity");

		if ((props == 1) || (props == 2)) {
			BlogsPropsServiceUtil.updateProps(entryId, props);
		}

		String comments = ParamUtil.getString(req, "comments_content");

		if (Validator.isNotNull(comments)) {
			BlogsCommentsServiceUtil.addComments(entryId, comments);
		}

		// Send redirect

		res.sendRedirect(ParamUtil.getString(req, "redirect"));
	}

	private void _deleteComments(ActionRequest req, ActionResponse res)
		throws Exception {

		String commentsId = ParamUtil.getString(req, "comments_id");

		BlogsCommentsServiceUtil.deleteComments(commentsId);

		// Send redirect

		res.sendRedirect(ParamUtil.getString(req, "redirect"));
	}

}