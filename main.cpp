#include <iostream>
#include "SHA1.h"
#include "MD5.h"

int main() {

    std::cout<<"Ejemplo de funcionamiento MD5: ";
    MD5("Hello World");
    std::cout<<endl;
    std::cout<<"Ejemplo de funcionamiento SHA1: ";
    Sha1 *sha1 = new Sha1;
    sha1->AlgSha1("Hello World");

    return 0;


}
