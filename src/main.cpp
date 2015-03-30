#include<iostream>
#include"lib.h"

using namespace std;

int main(int argc, char *argv[]){
//TOREMOVE tentative src code
    if(argc != 1 + 1){ //non argument case: argc = 1
        cerr << "format: ./a.out datafile_loc" << endl;
        cerr << "example: ./a.out ../workload_trustedParty/dataset/matrix_x_term_y_provider_test.dat" << endl;
    }

    cout << "first commandline argument is " << argv[1] << endl;

    MbodyName1 mb;
}
