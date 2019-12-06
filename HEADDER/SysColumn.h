#pragma once
#include <string>
using namespace std;
class Syscolumn
{
public:
	//Parametro de la tabla
	//Syscolumn();
	Syscolumn();
	~Syscolumn();
	void SetTblID(int tbl_id);
	int GetTblID();
	void setColumnID(int col_id);
	string GetColumnName();
	void SetColumnName(string col_name);
	string GetDataType();
	void SetDataType(string DataType);
	void SetLength(string length);
	string GetLength();
	bool setRequerido(char requerido);
	char GetRequerido();
	

private:
	int mv_col_ID;
	int mv_tbl_ID;
	short int mv_col_orden;
	string mv_col_name;
	string mv_col_Tipo;
	string mv_col_length;
	char mv_ind_require;
};