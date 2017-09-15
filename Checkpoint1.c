/*******************************************************************************
48430 Embedded C - Assignment 3
Names: Sanjeet Sharma, Sathira Wickramanayaka, Basuru Sooriyaarachchi, 
Jai Ghorpade
Student ID: 11742501,11825193,11841398,12916110 
Date of submission: 15/09/2017
*******************************************************************************/

/*******************************************************************************
List of header files
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*******************************************************************************
List preprocessing directives
*******************************************************************************/
#define MAX_PASSWORD_SIZE 30
#define MAX_ACCOUNT_SIZE 20
#define MAX_USERNAME_SIZE 15


/*******************************************************************************
List structs
*******************************************************************************/
struct accountdata
{
        char account[MAX_ACCOUNT_SIZE];
        char username[MAX_USERNAME_SIZE];
        char password [MAX_PASSWORD_SIZE];
        struct accountdata* nextp;
};
typedef struct accountdata accountdata_t;

/*******************************************************************************
Function prototypes
*******************************************************************************/
void printMenu();
void selectMenu();
void inputPassData();
void encryptData();
void displayData();
void decryptFile();
void compressFile();

/*******************************************************************************
Main
*******************************************************************************/
int main(void)
{

}

/*******************************************************************************
Print Menu
The purpose of this function is to print the menu options and display the 
information required from the user.
*******************************************************************************/
void printMenu()
{

}

/*******************************************************************************
Select Menu
The purpose of this function is select between the 2 modes of operation.Saving 
passwords and uploading confidential documents.
*******************************************************************************/
void selectMenu()
{

}

/*******************************************************************************
Input Pass Data
This function is called in the first mode of operation of this program.Its 
function is to get the password details from the user and save it in a file.
*******************************************************************************/
void inputPassData()
{

}

/*******************************************************************************
Data Encryption
The purpose of this function is to encrypt the file containing password 
details.
*******************************************************************************/
void encryptData()
{
               
}
/*******************************************************************************
Data De-encryption
The purpose of this function is to decrypt the encrypted file containing password
details.
*******************************************************************************/
void decryptData()
{
               
}

/*******************************************************************************
Display Data
This function is used in the firstmode of operation of the program.It called 
after decrypt data to display the required data.
*******************************************************************************/
void displayData()
{
               
}

/*******************************************************************************
Compress Data 
This function is called in the second mode of operation of this program.Its 
function is to compress confidential pdfs and photos uploaded by the user.
*******************************************************************************/
void compressFile()
{

}

/*******************************************************************************
Decompress Data 
This function is called when the user wants to access confidential pdfs and 
photos.The file is first decrypted and this function is called afterwards to
decompress the files.
*******************************************************************************/
void decompressFile()





