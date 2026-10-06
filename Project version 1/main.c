#include <stdio.h>

int main(void)
{

    // 1. TITLE BANNER
    printf("=========================================================================\n");
    printf("                                                               \n");
    printf("              NORTH SOUTH UNIVERSITY                           \n");
    printf("           CAMPUS LOST & FOUND REGISTRY                        \n");
    printf("                                                               \n");
    printf("=========================================================================\n\n");

    // 2. SYSTEM INFORMATION
    printf("Institution : North South University\n");
    printf("Department  : Student Affairs\n");
    printf("System      : Campus Lost & Found Registry\n");
    printf("Location    : Bashundhara, Dhaka\n\n");

    // 3. MENU OF OPERATIONS
    printf("===========================================================================\n");
    printf("                    SYSTEM MENU                                 \n");
    printf("===========================================================================\n\n");

    printf("1. Report Lost Item\n");
    printf("2. Report Found Item\n");
    printf("3. Search Item Status\n");
    printf("4. Display All Registered Items\n");
    printf("5. Claim a Found Item\n");
    printf("6. View Lost Items\n");
    printf("7. View Found Items\n");
    printf("8. Contact Student Affairs\n");
    printf("9. Exit System\n\n");


    // 4. REGISTERED ITEM RECORDS
    printf("=========================================================================================\n");
    printf("                 REGISTERED ITEM RECORDS                       \n");
    printf("========================================================================================\n\n");


    printf("%-6s %-20s %-15s %-10s %-15s %-10s\n",
        "ID", "ITEM NAME", "LOCATION", "STATUS", "CATEGORY", "PRIORITY \n");



    // Lost Items
    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           101, "Student ID Card", "Library", "Lost", "Document", "High");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           102, "Black Backpack", "CSE Building", "Lost", "Bag", "Medium");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           103, "iPhone 14", "Library", "Lost", "Electronics", "High");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           104, "Blue Water Bottle", "Cafeteria", "Lost", "Personal", "Low");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           105, "Scientific Calculator", "Study Hall", "Lost", "Electronics", "Medium");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           106, "Black Wallet", "Food Court", "Lost", "Personal", "High");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           107, "AirPods Case", "Library", "Lost", "Electronics", "Medium");


    // Found Items

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           108, "Leather Wallet", "Cafeteria", "Found", "Personal", "High");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           109, "Scientific Calculator", "Lab 3", "Found", "Electronics", "Medium");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           110, "USB Flash Drive", "Library", "Found", "Electronics", "Medium");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           111, "Black Umbrella", "Gate 2", "Found", "Personal", "Low");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           112, "Wrist Watch", "Auditorium", "Found", "Accessories", "High");

    printf("%-6d %-20s %-15s %-10s %-15s %-10s\n",
           113, "Student ID Card", "Cafeteria", "Found", "Document", "High \n");


    printf("Total Records Displayed : 13\n");
    printf("Lost Items               : 7\n");
    printf("Found Items              : 6\n\n");


    // 5. LOST ITEM INFORMATION

    printf("===========================================================================================\n");
    printf("                    LOST ITEM INFORMATION                      \n");
    printf("==========================================================================================\n\n");

    printf("Record ID : 101\n");
    printf("Item      : Student ID Card\n");
    printf("Location  : Library\n");
    printf("Status    : LOST\n");
    printf("Report    : Student reported the item missing after class.\n\n");

    printf("Record ID : 102\n");
    printf("Item      : Black Backpack\n");
    printf("Location  : CSE Building\n");
    printf("Status    : LOST\n");
    printf("Report    : Backpack was left near the classroom entrance.\n\n");

    printf("Record ID : 103\n");
    printf("Item      : iPhone 14\n");
    printf("Location  : Library\n");
    printf("Status    : LOST\n");
    printf("Report    : Phone was possibly lost near the reading area.\n\n");

    printf("Record ID : 104\n");
    printf("Item      : Blue Water Bottle\n");
    printf("Location  : Cafeteria\n");
    printf("Status    : LOST\n");
    printf("Report    : Blue bottle with university logo.\n\n");

    printf("Record ID : 105\n");
    printf("Item      : Scientific Calculator\n");
    printf("Location  : Study Hall\n");
    printf("Status    : LOST\n");
    printf("Report    : Calculator was missing after study session.\n\n");

    printf("Record ID : 106\n");
    printf("Item      : Black Wallet\n");
    printf("Location  : Food Court\n");
    printf("Status    : LOST\n");
    printf("Report    : Wallet containing cards and cash was lost.\n\n");

    printf("Record ID : 107\n");
    printf("Item      : AirPods Case\n");
    printf("Location  : Library\n");
    printf("Status    : LOST\n");
    printf("Report    : White AirPods charging case was lost.\n\n");


    // 6. FOUND ITEM INFORMATION

    printf("=================================================================================================\n");
    printf("                    FOUND ITEM INFORMATION                     \n");
    printf("================================================================================================\n\n");

    printf("Record ID : 108\n");
    printf("Item      : Leather Wallet\n");
    printf("Location  : Cafeteria\n");
    printf("Status    : FOUND\n");
    printf("Category  : Personal\n");
    printf("Priority  : High\n\n");

    printf("Record ID : 109\n");
    printf("Item      : Scientific Calculator\n");
    printf("Location  : Lab 3\n");
    printf("Status    : FOUND\n");
    printf("Category  : Electronics\n");
    printf("Priority  : Medium\n\n");

    printf("Record ID : 110\n");
    printf("Item      : USB Flash Drive\n");
    printf("Location  : Library\n");
    printf("Status    : FOUND\n");
    printf("Category  : Electronics\n");
    printf("Priority  : Medium\n\n");

    printf("Record ID : 111\n");
    printf("Item      : Black Umbrella\n");
    printf("Location  : Gate 2\n");
    printf("Status    : FOUND\n");
    printf("Category  : Personal\n");
    printf("Priority  : Low\n\n");

    printf("Record ID : 112\n");
    printf("Item      : Wrist Watch\n");
    printf("Location  : Auditorium\n");
    printf("Status    : FOUND\n");
    printf("Category  : Accessories\n");
    printf("Priority  : High\n\n");

    printf("Record ID : 113\n");
    printf("Item      : Student ID Card\n");
    printf("Location  : Cafeteria\n");
    printf("Status    : FOUND\n");
    printf("Category  : Document\n");
    printf("Priority  : High\n\n");


    // 7. IMPORTANT SYSTEM INFORMATION
    printf("==========================================================================================\n");
    printf("                     IMPORTANT INFORMATION                        \n");
    printf("========================================================================================\n\n");

    printf("1.Lost items should be reported as soon as possible.\n");
    printf("2.Found items should be submitted to Student Affairs.\n");
    printf("3.Students must provide valid identification to claim items.\n");
    printf("4.Claim fees may apply to selected valuable items.\n");
    printf("5.Unclaimed items will be handled according to university policy.\n\n");


    // 8. CONTACT INFORMATION
    printf("============================================================================\n");
    printf("                    CONTACT INFORMATION                        \n");
    printf("============================================================================\n\n");

    printf("Department : Student Affairs\n");
    printf("Office     : Administration Building\n");
    printf("Email      : lostandfound@northsouth.edu\n");
    printf("Phone      : +880 2 55668200\n");
    printf("Office Hrs : 9:00 AM - 5:00 PM\n\n");


    return 0;
}
