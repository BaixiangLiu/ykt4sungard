/*
 * WARNING: DO NOT EDIT THIS FILE. This is a generated file that is synchronized
 * by MyEclipse Hibernate tool integration.
 *
 * Created Tue Nov 14 13:16:00 CST 2006 by MyEclipse Hibernate Tool.
 */
package org.king.monitor.domain;

import java.io.Serializable;

/**
 * A class representing a composite primary key id for the MONITORS
 * table.  This object should only be instantiated for use with instances 
 * of the Monitors class.
 * WARNING: DO NOT EDIT THIS FILE. This is a generated file that is synchronized 
 * by MyEclipse Hibernate tool integration.
 */
public class MonitorsKey
    implements Serializable
{
    /** The cached hash code value for this instance.  Settting to 0 triggers re-calculation. */
    private volatile int hashValue = 0;

    /** The value of the HOST component of this composite id. */
    private java.lang.String host;

    /** The value of the CATEGORY component of this composite id. */
    private java.lang.String category;

    /** The value of the ENTRY component of this composite id. */
    private java.lang.String entry;

    /**
     * Simple constructor of MonitorsKey instances.
     */
    public MonitorsKey()
    {
    }

    /**
     * Returns the value of the host property.
     * @return java.lang.String
     */
    public java.lang.String getHost()
    {
        return host;
    }

    /**
     * Sets the value of the host property.
     * @param host
     */
    public void setHost(java.lang.String host)
    {
        hashValue = 0;
        this.host = host;
    }

    /**
     * Returns the value of the category property.
     * @return java.lang.String
     */
    public java.lang.String getCategory()
    {
        return category;
    }

    /**
     * Sets the value of the category property.
     * @param category
     */
    public void setCategory(java.lang.String category)
    {
        hashValue = 0;
        this.category = category;
    }

    /**
     * Returns the value of the entry property.
     * @return java.lang.String
     */
    public java.lang.String getEntry()
    {
        return entry;
    }

    /**
     * Sets the value of the entry property.
     * @param entry
     */
    public void setEntry(java.lang.String entry)
    {
        hashValue = 0;
        this.entry = entry;
    }

    /**
     * Implementation of the equals comparison on the basis of equality of the id components.
     * @param rhs
     * @return boolean
     */
    public boolean equals(Object rhs)
    {
        if (rhs == null)
            return false;
        if (! (rhs instanceof MonitorsKey))
            return false;
        MonitorsKey that = (MonitorsKey) rhs;
        if (this.getHost() == null || that.getHost() == null)
        {
            return false;
        }
        if (! this.getHost().equals(that.getHost()))
        {
            return false;
        }
        if (this.getCategory() == null || that.getCategory() == null)
        {
            return false;
        }
        if (! this.getCategory().equals(that.getCategory()))
        {
            return false;
        }
        if (this.getEntry() == null || that.getEntry() == null)
        {
            return false;
        }
        if (! this.getEntry().equals(that.getEntry()))
        {
            return false;
        }
        return true;
    }

    /**
     * Implementation of the hashCode method conforming to the Bloch pattern with
     * the exception of array properties (these are very unlikely primary key types).
     * @return int
     */
    public int hashCode()
    {
        if (this.hashValue == 0)
        {
            int result = 17;
            int hostValue = this.getHost() == null ? 0 : this.getHost().hashCode();
            result = result * 37 + hostValue;
            int categoryValue = this.getCategory() == null ? 0 : this.getCategory().hashCode();
            result = result * 37 + categoryValue;
            int entryValue = this.getEntry() == null ? 0 : this.getEntry().hashCode();
            result = result * 37 + entryValue;
            this.hashValue = result;
        }
        return this.hashValue;
    }
}
