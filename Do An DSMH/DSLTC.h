//------danh sach lop tin chi------
//danh sach tuyen tinh la mang mot con tro. con tro tro toi danh sach sinh vien dang ki
#define MAXLTC 100
struct ltc
{
	int malop; 		//ma lop
	char mmh[10];	//ma mon hoc
	int nienkhoa;	// nien khoa
	int hocki; 		// hoc ki
	int nhom; 		//nhom
	int nsvmax;
	NODEDK ptrdk = NULL;	
};
typedef struct ltc Ltc;
struct	dslop
{
	int n;
	Ltc nodeltc[MAXLTC];
}
typedef struct	dslop DSLOP;
DSLOP DSLTC;



