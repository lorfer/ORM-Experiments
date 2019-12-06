#pragma once
#include <string>
using namespace std;
class SysForeignKey
{

		public:
	
			//SysForeignKey(int p_tbl_id);
			SysForeignKey(int p_tbl_id, int tbl_hija_id, int col_hija_id, int tbl_padre_id, int col_padre_id);

			~SysForeignKey();
			int getFkID();
			int getTblParentID();
			int getTblChildID();
			int getColChildID();

		private:
			int mv_Fk_ID;
			int mv_tbl_Parent_id;
			int mv_tbl_Child_id;
			int mv_Col_Parent_id;
			int mv_Col_Child_id;
			//SysForeignKey fkTblLoad();
};