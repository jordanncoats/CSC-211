#include <iostream>
#include <stdio.h>
using namespace std;
//openfile expects the filename from the argv[i] and then a string version of the filename in case of error
void openfile(FILE *fname, string filename){
    char c;
    if(fname != NULL){
		while((c = fgetc(fname)) !=EOF){
		cout << c;
		}
		fclose(fname);
    }
    else{
        cerr << "cat: " << filename << ": no such file or directory\n";
    }
}
//it will output either an cerr if the filename is NULL or cout c with the file's txt content when finished

int main(int argc, char*argv[]){
    if(argc > 1){
		int i = 1;
		while(i < argc){
			string filename = argv[i];
			FILE *fname = fopen(argv[i], "r");
			openfile(fname, filename);
			i = i + 1;
		}
    }
    return 0;
}