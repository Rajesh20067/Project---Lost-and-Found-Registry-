// creating version 1 of the project named lost and found registry

#include <stdio.h>

int main(void)
{

    // 1.TITLE 
    printf("================================================================================\n");
    printf("              NORTH SOUTH UNIVERSITY                           \n");
    printf("              LOST & FOUND REGISTRY                        \n");
    
    printf("=========================================================================\n\n");

    // 2.SYSTEM INFORMATION
    printf("Institution : North South University\n");
    printf("Department  : Lost and Found\n");
    printf("System      : Campus Lost & Found Registry\n");
    printf("Location    : Bashundhara,Dhaka\n\n");

    // 3.MENU OF OPERATIONS
    printf("=====================================================================\n");
printf("                SYSTEM MENU                                 \n");
    printf("==========================================================================\n\n");

printf("1.Report Lost Item\n");
 printf("2. Report Found Item\n");
printf("3. Search Item Status\n");
printf("4.Display All Registered Items\n");
printf("5.Claim a Found Item\n");
printf("6.Contact Student Affairs\n");
printf("7. Exit System\n\n");




 printf("-------------------------------------------------------------------------------\n\n");



    printf("ID\tITEM NAME\t\tLOCATION\tSTATUS\tCATEGORY\t\n\n");


// Lost Items
printf("101\tStudent ID Card\t\tLibrary\t\tLost\tDocument\t\n");

printf("102\tBlack Backpack\t\tNAC-503\t\tLost\tBag\t\n");

printf("103\tiPhone 14\t\tLibrary\t\tLost\tElectronics\t\n");

printf("104\tBottle\t\t\tCafeteria\t\tLost\tPersonal\t\n");

printf("105\tCalculator\t\tStudy Hal l\tLost\tElectronics\t\n");

printf("106\tBlack Wallet\t\tSAC 407\t\tLost\tPersonal \t\n");

printf("107\t AirPods Case\t\tLibrary \tLost \tElectronics\t\n");


// Found Items
printf("108\t Leather Wallet\t\tCafeteria\t Found\tPersonal\t\n");

printf("109\t Calculator\t\tStudy Hall \tFound\tElectronics\t \n");

printf("110\tbook\t\t\tLibrary\t\tFound\tElectronics \t \n");

printf("111\tUmbrella\t\tGate 2\t\tFound\tPersonal\t\n");

printf("112\tWatch\t\t\tAud 8\t\tFound\tAccessories\t\n");

printf("113\tStudent ID Card\t\t NAC 208\tFound\tDocument\t\n\n");


printf("Total Records Displayed : 13\n");
printf("Lost Items              : 7\n");
printf("Found Items             : 6\n");


// 7.IMPORTANT INFORMATION
    printf("==========================================================================\n");
    printf("                  IMPORTANT INFORMATION                        \n");
    printf("==============================================================================\n");

    printf("1.Lost items should be reported asap.\n");
    printf("2.Found items should be submitted to Student Affairs.\n");
    printf("3.Students must provide valid identification to claim items.\n");
    printf("4.Unclaimed items will be handled accorrding to university policy.\n");


    // 8.CONTACT INFORMATION DETAILS
    printf("===================================================================\n");
    printf("                 CONTACT INFORMATION                       \n");
    printf("=======================================================================\n");

   printf("Department\t: lost and found \n");
printf("Office\t: Administration Building\n");
printf("Email\t: lostandfound@northsouth.edu\n");
printf("Phone\t: +880665778899\n");

    return 0;
}
