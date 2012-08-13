/*
 * =====================================================================================
 *
 *       Filename:  ftp.h
 *
 *    Description:  与ftp有关的全局变量声明，函数声明等
 *
 *        Version:  1.0
 *        Created:  08/11/2012 01:03:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xiangzi888 (), xiangzi888888@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


/*-----------------------------------------------------------------------------
 *  外部变量声明
 *-----------------------------------------------------------------------------*/
extern FILE *cin, *cout;
extern int ftpport;
extern int data;
extern int connected;
extern char req[];
extern char ans[];


/*-----------------------------------------------------------------------------
 *  函数声明
 *-----------------------------------------------------------------------------*/
int getftpport(void);
void setpeer(char *domain);
void lostpeer(void);
void login(char *domain, int anon);
char *hookup (char *domain);
int getreply(void);
int command (const char *fmt, ...);



