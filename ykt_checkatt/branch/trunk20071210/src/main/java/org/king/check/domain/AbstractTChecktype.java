package org.king.check.domain;



/**
 * AbstractTChecktype generated by MyEclipse - Hibernate Tools
 */

public abstract class AbstractTChecktype extends org.king.framework.domain.BaseObject implements java.io.Serializable {


    // Fields    

     private String typeId;
     private String typeName;


    // Constructors

    /** default constructor */
    public AbstractTChecktype() {
    }

    
    /** full constructor */
    public AbstractTChecktype(String typeName) {
        this.typeName = typeName;
    }

   
    // Property accessors

    public String getTypeId() {
        return this.typeId;
    }
    
    public void setTypeId(String typeId) {
        this.typeId = typeId;
    }

    public String getTypeName() {
        return this.typeName;
    }
    
    public void setTypeName(String typeName) {
        this.typeName = typeName;
    }
   








}