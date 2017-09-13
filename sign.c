#include "sign.h"

int main( int argc, const char* argv[] )
{
	while(sign());
	printf("error\n");
	return -1;
}

int sign(){
	//makes message envlope?
	EVP_MD_CTX* MDcontext = EVP_MD_CTX_create();
	//makes envlope for private key
	EVP_PKEY* prvKey  = EVP_PKEY_new();
	EVP_PKEY_assign_RSA(priKey, rsa);
	//prep to sign
	EVP_DigestSignInit(MDcontext,NULL, EVP_sha512(), NULL,priKey);
	
}
