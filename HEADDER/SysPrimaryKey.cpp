#include "SysPrimaryKey.h"

void SysPrimaryKey::setPK_ID(int PK_ID)
{
	this->mv_PK_ID = PK_ID;
}

void SysPrimaryKey::setTbl_ID(int tbl_ID)
{
	this->mv_Tbl_ID = tbl_ID;
}

void SysPrimaryKey::setCol_ID(int mv_col)
{
	this->mv_Col_ID = mv_col;
}

int SysPrimaryKey::getTbl_ID()
{
	return mv_Tbl_ID;
}

SysPrimaryKey::SysPrimaryKey(int p_tbl_id)
{
	this->mv_Tbl_ID = p_tbl_id;
}

SysPrimaryKey::SysPrimaryKey()
{
}

//SysPrimaryKey::~SysPrimaryKey()
//{
//}


