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
};
typedef struct ltc Ltc;
struct	lTC
{
	Ltc info;
	LISTDK dssv;
};
typedef struct lTC LTC;
typedef struct lTC* pLTC;

struct dsLTC
{
	int n=-1;
	pLTC DsLTC[MAXLTC];
};
typedef struct dsLTC DSLTC;




