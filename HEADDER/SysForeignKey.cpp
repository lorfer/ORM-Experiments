#include "SysForeignKey.h"

//Id de la tabla padre
SysForeignKey::SysForeignKey(int p_tbl_id, int tbl_hija_id, int col_hija_id, int tbl_padre_id, int col_padre_id)
{
	this->mv_Fk_ID = p_tbl_id;
	this->mv_tbl_Child_id = tbl_hija_id;
	this->mv_Col_Child_id = col_hija_id;
	this->mv_tbl_Parent_id = tbl_padre_id;
	this->mv_Col_Parent_id = col_hija_id;
}

SysForeignKey::~SysForeignKey()
{
}

int SysForeignKey::getFkID()
{
	return mv_Fk_ID;
}

int SysForeignKey::getTblParentID()
{
	return mv_tbl_Parent_id;
}

int SysForeignKey::getTblChildID()
{
	return mv_Col_Child_id;
}

int SysForeignKey::getColChildID()
{
	return mv_Col_Child_id;
}


