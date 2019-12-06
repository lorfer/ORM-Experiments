#include "SysEntity.h"
#include <iostream>
#include <fstream>
#include<sstream>
#include<string>
#include<vector>
//#include <list>
using namespace std;

SysEntity::SysEntity(string nombreTabla)
{
	
	runAll(nombreTabla);
}

SysEntity::SysEntity()
{
}


bool SysEntity::TableExist(string nameTable)
{
	mv_action_Msj = "La tabla no existe";
	ifstream reads("..\\ORM-Experiments\\Sys\\SysTable.txt", ios::in);
	string temp;
	//For reader the headders
	getline(reads, temp);
	ifstream subLector(temp);//read actual line 
	vector<string> all;
	
	while (reads)
	{	
		reads >> temp;
		vector<string> aux;
		aux = getSplit(temp, ';');
		all.push_back(aux[1]);
		//cout << temp << endl;
	}
	for (int i = 0; i < all.capacity(); i++)
	{
		if (all[i] == nameTable)
		{
			//save In memory the entity ID
			this->TBL_ID_CONST =  i+1;
			//save in memory  the entity name
			this->mv_tbl_name = nameTable;
			return true;
		}
	} 
	return false;
}

SysEntity::~SysEntity()
{
}

//TODO:Implement the save
bool SysEntity::Alta(vector<string> p_data)
{
	if (p_data.size() == ObjAllCols.size())
	{

	}
	
	
	
	return false;
 }
//TODO:Implement the Delete
bool SysEntity::Baja(int p_pk_val)
{


	return false;
}
//TODO: Implement the search
vector<string> SysEntity::Buscar(string p_temp)
{
	return vector<string>();
}

//TODO:Loader PrimaryKey Completed
void SysEntity::LoadPKey()
{
	ifstream reader("..\\ORM-Experiments\\Sys\\SysPrimaryKey.csv");
	string temp;
	//Read the headders of the files
	ifstream subLector(temp);//read actual line 
	getline(reader, temp);
	string auxiliar;
	//Read of files
	while (reader)
	{
		reader >> temp;
		vector<string> aux;
		aux = getSplit(temp, ';');
		
		objPk.setTbl_ID(stoi(aux[1]));

		if (this->TBL_ID_CONST == objPk.getTbl_ID())
		{
			objPk.setPK_ID(stoi(aux[0]));
			objPk.setCol_ID(stoi(aux[2]));
			break;
		}
		
	}

	subLector.close();
	
}
//TODO:COMPLETED! 
vector<string> SysEntity::getSplit(const string &p_string, char p_delim)
{
	vector<string> result;
	stringstream ss(p_string);
	string item;
	while (getline(ss, item, p_delim))
	{
		//item.pop_back(); Fallido
		result.push_back(item);
	}

	return result;

}

//TODO: COMPLETED!
void SysEntity::LoadColumns()
{
	//For Read all columns
	
	ifstream reader("..\\ORM-Experiments\\Sys\\SysColumns.csv");
	string temp;
	//Read the headders of the files
	ifstream subLector(temp);//read actual line 
	getline(reader, temp);
	string auxiliar;
	//Read of files
	while (reader)
	{
		reader >> temp;
		vector<string> aux;
		aux = getSplit(temp, ';');
	
		cols.SetTblID(stoi(aux[0]));
		cols.setColumnID(stoi(aux[1]));
		cols.SetColumnName(aux[2]);
		cols.SetDataType(aux[3]);
		cols.SetLength(aux[4]);
		cols.setRequerido(stoi(aux[5]) == 1);

		if (this->TBL_ID_CONST == cols.GetTblID() )
		{

			ObjAllCols.push_back(cols);
		}
	}

	subLector.close();
}

void SysEntity::runAll(string p_tbl_name)
{
	if (TableExist(p_tbl_name))
	{
		LoadColumns();
		//LoadForeignKeys();
		LoadPKey();
	};
}

//TODO: [Ójo]
void SysEntity::LoadForeignKeys()
{
	ifstream r = ifstream();
	r.open("...\\...\\ORM-Experiments\\Sys\\SysForeignKey.csv", ios::in);
	string temp;
	//For reader the headders
	getline(r, temp);

	ifstream subLector(temp);//read actual line 
	string auxiliar;

	//Read of files
	while (r)
	{
	

		//if (TBL_ID_CONST ==  )
		//{
		//	//SysForeignKey FKey(fk_id,tbl_hija_id,col_hija_id, tbl_padre_id, col_padre_id);
		//	//Fill Vector<SysColumn>
		//	ObjAllFk.push_back(FKey);
		//}
	}

	subLector.close();


}



