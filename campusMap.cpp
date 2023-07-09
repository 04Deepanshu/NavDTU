#include <graphics.h>
int main() {
initwindow(1370,700);

// 36 LIBRARY (485,70) 
setfillstyle(7, LIGHTGREEN);
rectangle(430, 50, 540, 90);
floodfill(431, 51, WHITE);
char lib[8] = "LIBRARY";
outtextxy(452,65,lib);

// 35 ADMIN BLOCK (425,160)
setfillstyle(5, RED);
rectangle(370, 140, 480, 180);
floodfill(371, 141, WHITE);
char AB[12] = "ADMIN BLOCK";
outtextxy(380,150,AB);

// 34 VVS HOSTEL (57,40)
setfillstyle(HATCH_FILL, BLUE);
rectangle(2, 20, 112, 60);
floodfill(3, 21, WHITE);
char VVS[11] = "VVS HOSTEL";
outtextxy(12,30,VVS);

// 33 HJB HOSTEL (57,85)
setfillstyle(HATCH_FILL, BLUE);
rectangle(2, 65, 112, 105);
floodfill(3, 66, WHITE);
char HJB[11] = "HJB HOSTEL";
outtextxy(12,75,HJB);

// 32 BMH HOSTEL (57,140)
setfillstyle(HATCH_FILL, BLUE);
rectangle(2, 120, 112, 160);
floodfill(3, 121, WHITE);
char BMH[11] = "BMH HOSTEL";
outtextxy(12,130,BMH);

// 31 BCH HOSTEL (172,140)
setfillstyle(HATCH_FILL, BLUE);
rectangle(117, 120, 227, 160);
floodfill(118, 121, WHITE);
char BCH[11] = "BCH HOSTEL";
outtextxy(127,130,BCH);

// 30 CVR HOSTEL (172,40)
setfillstyle(HATCH_FILL, BLUE);
rectangle(117, 20, 227, 60);
floodfill(118, 21, WHITE);
char CVR[11] = "CVR HOSTEL";
outtextxy(127,30,CVR);

// 29 JCB HOSTEL (172,85)
setfillstyle(HATCH_FILL, BLUE);
rectangle(117, 65, 227, 105);
floodfill(118, 66, WHITE);
char JCB[11] = "JCB HOSTEL";
outtextxy(127,75,JCB);

// 28 RAJ SOIN HALL (100,295)
setfillstyle(SOLID_FILL, WHITE);
rectangle(50, 250, 150 , 340);
floodfill(51, 251, WHITE);
char rajsoin[12] = " RAJ SOIN ";
char hall[12] = " HALL ";
outtextxy(65,275,rajsoin);
outtextxy(75,300,hall);

// 27 INFORMATION TECHNOLOGY DEPARTMENT (150,425)
setfillstyle(CLOSE_DOT_FILL, LIGHTGRAY);
rectangle(50, 400, 250 , 450);
floodfill(51, 401, WHITE);
char IT[23] = "INFORMATION TECHNOLOGY";
char Dep[11] = "DEPARTMENT";
outtextxy(55,410,IT);
outtextxy(90,430,Dep);

// 26 COMPUTER SCIENCE DEPARTMENT (125,485)
setfillstyle(CLOSE_DOT_FILL, LIGHTGRAY);
rectangle(50, 460, 200 , 510);
floodfill(51, 461, WHITE);
char CS[17] = "COMPUTER SCIENCE";
char Depa[12] = "DEPARTMENT";
outtextxy(55,470,CS);
outtextxy(80,490,Depa);

// 25 SOFTWARE ENGINEERING DEPARTMENT (145,545)
setfillstyle(CLOSE_DOT_FILL, LIGHTGRAY);
rectangle(50, 520, 240 , 570);
floodfill(51, 521, WHITE);
char SOFTWARE[21] = "SOFTWARE ENGINEERING";
char DEPTT[11] = "DEPARTMENT";
outtextxy(60,530,SOFTWARE);
outtextxy(80,550,DEPTT);

// 24 MATHEMATICS & COMPUTING DEPARTMENT (151,605)
setfillstyle(CLOSE_DOT_FILL, LIGHTGRAY);
rectangle(50, 580, 252 , 630);
floodfill(51, 581, WHITE);
char MAC[24] = "MATHEMATICS & COMPUTING";
char DEPTNT[11] = "DEPARTMENT";
outtextxy(55,590,MAC);
outtextxy(90,610,DEPTNT);

// 23 BR AUDI (550,160)
setfillstyle(SOLID_FILL, LIGHTGRAY);
rectangle(500, 140, 600, 180);
floodfill(501, 141,WHITE); 
char BR[8] = "BR AUDI";
outtextxy(520,150,BR);

// 22 MINI OAT (550,250)
setfillstyle(CLOSE_DOT_FILL,WHITE);
circle(550,250,40);
floodfill(551, 251, WHITE);
char miniOAT[9] = "MINI OAT";
outtextxy(520,240,miniOAT);

// 21 OAT (700,350)
setfillstyle(CLOSE_DOT_FILL,BROWN);
circle(700,350,85);
floodfill(701, 351, WHITE);
char oat[4] = "OAT";
outtextxy(688,345,oat);

// 20 COMPUTER CENTER (700,265)
int centerX = 700;
int centerY = 350 - 80;
int diamondSize = 60;  // Decreased size
setfillstyle(CLOSE_DOT_FILL, LIGHTMAGENTA);
line(centerX, centerY - diamondSize, centerX + diamondSize, centerY);
line(centerX + diamondSize, centerY, centerX, centerY + diamondSize);
line(centerX, centerY + diamondSize, centerX - diamondSize, centerY);
line(centerX - diamondSize, centerY, centerX, centerY - diamondSize);
for (int y = centerY - diamondSize; y <= centerY + diamondSize; y++) {
    // Loop through the columns of the diamond shape
    for (int x = centerX - diamondSize; x <= centerX + diamondSize; x++) {
        // Check if the current point is within the diamond shape using the diamond equation
        if (abs(x - centerX) + abs(y - centerY) <= diamondSize) {
            putpixel(x, y, LIGHTMAGENTA); // Set the pixel color to brown
        }
    }   
}
char text1[9] = "COMPUTER";
char text2[7] = "CENTER";
outtextxy(centerX - textwidth(text1)/2, centerY - textheight(text1)/2, text1);
outtextxy(centerX - textwidth(text2)/2, centerY - textheight(text2)/2 +15, text2); 

// 19 SPORTS COMPLEX (1039.5,65)
setfillstyle(CLOSE_DOT_FILL, GREEN);
rectangle(700, 130, 1379, 0);
floodfill(701, 1, WHITE); 
char SC[15] = "SPORTS COMPLEX";
outtextxy(950, 60, SC);

// 18 SCIENCE BLOCK (765,170)
setfillstyle(SOLID_FILL, LIGHTGREEN);
rectangle(700, 150, 830, 190);
floodfill(701, 151, WHITE);
char SB[14] = "SCIENCE BLOCK";
outtextxy(710, 160, SB);

// 17 MECHANICAL WORKSHOP (1095,180)
setfillstyle(3, BROWN);
rectangle(1000, 160, 1190, 200);
floodfill(1001, 161, WHITE);
char MW[20] = "MECHANICAL WORKSHOP";
outtextxy(1010, 170, MW);

// 16 SPS 5-8 (1205,265)
setfillstyle(SOLID_FILL, LIGHTRED);
rectangle(1180, 240, 1230, 290);
floodfill(1190, 250, WHITE);
char SPS5[4] = "SPS";
char nums[4]  = "5-8";
outtextxy(1190, 250, SPS5);
outtextxy(1195, 270, nums);

// 15 SPS 1-4 (1125,265)
setfillstyle(SOLID_FILL, LIGHTRED);
rectangle(1100, 240, 1150, 290);
floodfill(1110, 250, WHITE);
char SPS1[4] = "SPS";
char num[4]  = "1-4";
outtextxy(1110, 250, SPS1);
outtextxy(1115, 270, num);

// 14 MECHANICAL AND BIOTECHNOLOGY DEPARTMENT (920,265)
setfillstyle(CLOSE_DOT_FILL, LIGHTGRAY);
rectangle(800, 230, 1040, 300);
floodfill(801, 231, WHITE);
char MD[27] = "MECHANICAL & BIOTECHNOLOGY";
char D[11] = "DEPARTMENT";
outtextxy(810, 240, MD);
outtextxy(865, 270, D);

// 13 AMUL (875,350)
setfillstyle(SOLID_FILL, BLUE);
rectangle(850, 330, 900, 370);
floodfill(855, 340, WHITE); 
char amul[5] = "AMUL";
outtextxy(855, 340, amul);

// 12 NESCAFE (530,350)
setfillstyle(SOLID_FILL, RED);
rectangle(490, 330, 570, 370);
floodfill(500, 340, WHITE);
char nesc[8] = "NESCAFE";
outtextxy(500, 340, nesc);


// 11 ELECTRICAL DEPARTMENT (535,455)
setfillstyle(CLOSE_DOT_FILL, LIGHTGRAY);
rectangle(480, 420, 590, 490);
 floodfill(501, 431, WHITE);
char E1[12] = "ELECTRICAL";
char DD1[11] = "DEPARTMENT";
outtextxy(490, 435, E1);
outtextxy(488, 460, DD1);

// 10 ELECTRONICS DEPARTMENT (700,515)
setfillstyle(CLOSE_DOT_FILL, LIGHTGRAY);
rectangle(645, 480, 755, 550);
floodfill(646, 481, WHITE);
char E[12] = "ELECTRONICS";
char DD[11] = "DEPARTMENT";
outtextxy(650, 495, E);
outtextxy(650, 520, DD);

// 9 CIVIL DEPARTMENT (865,455)
setfillstyle(CLOSE_DOT_FILL, LIGHTGRAY);
rectangle(810, 420, 920, 490);
floodfill(811, 421, WHITE);
char E2[12] = "CIVIL";
char DD2[11] = "DEPARTMENT";
outtextxy(830, 435, E2);
outtextxy(815, 460, DD2);

// 8 CANTEEN (1000,350)
setfillstyle(4, YELLOW);
rectangle(950, 320, 1050, 380);
floodfill(951, 321, WHITE);
char canteenText[8] = "CANTEEN";
outtextxy(970, 340, canteenText);

// 7 PRAGYA BHAWAN (1000,495)
setfillstyle(CLOSE_DOT_FILL, WHITE);
rectangle(950, 460, 1050, 530);
floodfill(951, 461, WHITE);
char P[7] = "PRAGYA";
char B[7] = "BHAWAN";
outtextxy(970, 480,P);
outtextxy(970, 500,B);

// 6 SPS 9-12 (1085,485)
setfillstyle(SOLID_FILL, LIGHTRED); 
rectangle(1060, 460, 1110, 510);
floodfill(1070, 470, WHITE);
char SPS9[4] = "SPS";
char numb[5]  = "9-12";
outtextxy(1070, 470, SPS9);
outtextxy(1070, 490, numb);


// 5 SNH HOSTEL (945,585)
setfillstyle(HATCH_FILL, LIGHTMAGENTA);
rectangle(895, 570, 995, 600);
floodfill(896, 571, WHITE);
char SNH[11] = "SNH HOSTEL";
outtextxy(900,580,SNH);

// 4 KCH HOSTEL (1202.5,585)
setfillstyle(HATCH_FILL, LIGHTMAGENTA);
rectangle(1155, 570, 1250, 600);
floodfill(1156, 571, WHITE);
char KCH[11] = "KCH HOSTEL";
outtextxy(1160,580,KCH);

// 3 SBI BANK (1200,665)
setfillstyle(HATCH_FILL, LIGHTGRAY);
rectangle(1155, 650, 1245, 680);
floodfill(1156, 651, WHITE);
char SBI[9] = "SBI BANK";
outtextxy(1167,660,SBI);

// 2 AB HOSTEL (1052.5,665)
setfillstyle(HATCH_FILL, BLUE);
rectangle(1005, 650, 1100, 680);
floodfill(1006, 651, WHITE);
char ABH[10] = "AB HOSTEL";
outtextxy(1013,660,ABH);

// 1 COLLEGE GATE (700,685)
setfillstyle(HATCH_FILL, LIGHTGRAY);
rectangle(640, 670, 760, 700);
floodfill(650, 685, WHITE);
char cg[13] = "COLLEGE GATE";
outtextxy(648,680,cg);


getch();
closegraph();
}
