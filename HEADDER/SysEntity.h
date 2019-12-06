#pragma once

#include <string>
#include<vector>
#include "SysPrimaryKey.h"
#include "SysColumn.h"

#include "SysForeignKey.h"
using namespace std;

class SysEntity
{
public:

	SysEntity(string nombreTabla);

	SysEntity();

	bool TableExist(string nameTable);
	//string TableExist(string nameTable);

	~SysEntity();
	//Carga Los datos para el programa
	bool Alta(vector<string> p_data);
	bool Baja(int p_pk_val);
	vector<string> Buscar(string p_temp);

	Syscolumn cols;
	

private:
		
	//para mantener el id de la tabla actual
	int TBL_ID_CONST;
	
	int mv_tbl_ID;
	string mv_tbl_name;
	//ForeinKey of Table
	vector<SysForeignKey> ObjAllFk;
	vector<Syscolumn> ObjAllCols;
	//PrimaryKey Of Objet
	SysPrimaryKey objPk;
	//Error
	string mv_action_Msj;
	void runAll(string tableName);
	void LoadForeignKeys();
	void LoadColumns();
	void LoadPKey();
	vector<string> getSplit(const string &p_string, char p_delim );

};