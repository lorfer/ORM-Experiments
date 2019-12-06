#pragma once
#include<string>
#include<vector>

using namespace std;
class SysPrimaryKey 
{
private:

	//Primary key of table
	int mv_PK_ID;
	int mv_Tbl_ID;
	int mv_Col_ID;
	
public:
	void setPK_ID(int PK_ID);
	void setTbl_ID(int col_tbl);
	void setCol_ID(int mv_col);
	int getTbl_ID();
	SysPrimaryKey(int p_tbl_id);
	SysPrimaryKey();
	//~SysPrimaryKey();
	
};