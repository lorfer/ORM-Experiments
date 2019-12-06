#include "SysColumn.h"

using namespace std;
Syscolumn::Syscolumn()
{	
	
}

Syscolumn::~Syscolumn()
{
	
}

void Syscolumn::SetTblID(int tbl_id)
{
	this->mv_tbl_ID = tbl_id;
}

int Syscolumn::GetTblID()
{
	return mv_tbl_ID;
}

void Syscolumn::setColumnID(int col_id)
{
	this->mv_col_ID = col_id;
}

string Syscolumn::GetColumnName()
{
	return mv_col_name;
}

void Syscolumn::SetColumnName(string col_name)
{
	this->mv_col_name = col_name;
}

string Syscolumn::GetDataType()
{
	return string();
}

void Syscolumn::SetDataType(string DataType)
{
	this->mv_col_Tipo = DataType;
}

void Syscolumn::SetLength(string length)
{
	this->mv_col_length = length;
}

string Syscolumn::GetLength()
{
	return mv_col_length;
}

bool Syscolumn::setRequerido(char requerido)
{
	if (requerido == 1)
	{
		this->mv_ind_require = requerido;
		return true;
	}
	return false;

}

char Syscolumn::GetRequerido()
{
	return mv_ind_require;
}



