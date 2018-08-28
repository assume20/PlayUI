#ifndef _COMMUNICATION_MOD
#define _COMMUNICATION_MOD

#define DEBUG 0
#if DEBUG
 #define LE_DEBUG 1 
#endif 

#ifdef SOCKCLI_DLL_EXPORT

#ifndef SOCKCLI_STD_CALL
#define SOCKCLI_STD_CALL __declspec(dllexport) 
#endif  //end #ifndef SOCKCLI_STD_CALL

#else

#ifndef SOCKCLI_STD_CALL
#define SOCKCLI_STD_CALL __declspec(dllimport) 
#endif //end #ifndef SOCKCLI_STD_CALL

#endif//end #ifdef SOCKCLI_STD_CALL

typedef  struct
{
	int  type;           //data type
	char time[32];       //current time
	char le_guid[32];    //engine service id
	char tagid[64];      //tag id
	double xcoord;       //x coordinate
	double ycoord;       //y coordinate
	double zcoord;       //z coordinate
}clLocation;


extern "C" SOCKCLI_STD_CALL int connectServe(char *ipaddr, char *port);

extern "C" SOCKCLI_STD_CALL int isConnectServe();

extern "C" SOCKCLI_STD_CALL clLocation getjsonParseMod();

//class SOCKCLI_STD_CALL LOcateinfo
//{
//public:
//	void connectServe(char *ipaddr, char *port);
//	clLocation jsonParMod();
//	void closeServe();
//	int getType();
//	char* getTime();
//	char* getLeGuid();
//	char* getTagid();
//	double getXcoord();
//	double getYcoord();
//	double getZcoord();
//private:
//	char m_recBuffer[190];
//	clLocation m_clLocation;
//	char *m_ipaddr;
//	char *m_port;
//};


#endif //_COMMUNICATION_MOD