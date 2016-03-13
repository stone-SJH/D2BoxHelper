///////////////////////////////////////////
////                stone              ////
////                v1.0               ////
////                2016/3/11          ////
///////////////////////////////////////////

extern long _TableBeginIndex;
extern long _TableBufferIndex;
extern int _TableCol;
extern int _TableRow;

void ResetTable();
bool GetTableCell(const char * buf, long lsize, int *iRow, int *iCol, char* cell);