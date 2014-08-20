#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef int bool;
#define true 1
#define false 0

#define NONE 0
#define CHILD 1
#define YADULT 2
#define ADULT 3


void displayMainMenu() {	
	system("cls"); 
	printf("\n\t\tWELCOME TO THE LAZY DAISY ONCOMMANDLINE BOOK SHOP!");
	printf("\n\t\t-------------------------------------------------\n");
	printf("\nPlease select a category :)");
	printf("\n===========================");
	printf("\n A - Children");
	printf("\n B - Young-adult");
	printf("\n C - Adult");
	printf("\n Q - Quit");
	printf("\n Enter selection: ");
}

void childrenMenu() {
	system("cls"); 
	printf("\n\t\tCHILDREN'S BOOKS!");
    printf("\n\t\t-----------------");
    printf("\nPlease select a category :)");
    printf("\n===========================");
    printf("\n A - Action & Adventure");
    printf("\n B - Children's Literature & Fiction");
    printf("\n C - Religion");
    printf("\n D - Growing Up & Facts of Life");
    printf("\n E - Humor");
    printf("\n Q - Quit");
    printf("\n Enter selection: ");
}

void childrenA() {
	system("cls"); 
	printf("\n\t\tACTION & ADVENTURE!");
    printf("\n\t\t-------------------");
    printf("\nPlease select a book :)");
    printf("\n=======================");
    printf("\n\tTITLE\t\t\t\t\t\tPRICE");
    printf("\n A - The Incredible Journey\t\t\t      PHP 90.00");
    printf("\n B - The Battle for Skandia\t\t\t      PHP 248.00");
    printf("\n C - Beyond the Valley of Thorns\t\t      PHP 100.00");
    printf("\n D - The Tenth City\t\t\t\t      PHP 100.00  ");
    printf("\n E - The Last Battle (The Chronicles of Narnia)\t      PHP 100.00");
    printf("\n F - George's Marvelous Medicine\t\t      PHP 100.00");
    printf("\n G - James and the Giant Peach\t\t\t      PHP 90.00");
    printf("\n H - The Adventure of the Copper Beeches\t      PHP 100.00");
    printf("\n I - Moby-Dick\t\t\t\t\t      PHP 175.00");
    printf("\n J - Apollo 13\t\t\t\t\t      PHP 95.00  ");
    printf("\n Q - Back");
    printf("\n Enter selection: ");
}

void childrenB() {
	system("cls"); 
	printf("\n\t\tCHILDREN'S LITERATURE & FICTION!");
    printf("\n\t\t------------------------------");
    printf("\nPlease select a book :)");
    printf("\n=======================");
    printf("\n\tTITLE\t\t\t\t\t\tPRICE");
    printf("\n A - Trollz: All That Glitters\t\t\t      PHP 50.00  ");
    printf("\n B - Ramona's World (Ramona Series)\t\t      PHP 150.00");
    printf("\n C - The Little Prince\t\t\t\t      PHP 225.00  ");
    printf("\n D - Junie B. First Grader At Last!\t\t      PHP 50.00");
    printf("\n E - Summerland\t\t\t\t              PHP 250.00");
    printf("\n F - The Twits\t\t\t\t              PHP 125.00  ");
    printf("\n G - Charlie Bone And The Time Twister\t\t      PHP 150.00   ");
    printf("\n H - Chancy and the Grand Rascal\t\t      PHP 95.00");
    printf("\n I - Esio Trot\t\t\t\t\t      PHP 150.00   ");
    printf("\n J - Charlie and the Great Glass Elevator\t      PHP 280.00");
    printf("\n Q - Back");
    printf("\n Enter selection: ");
}

void childrenC() {
	system("cls"); 
	printf("\n\t\tRELIGIONS!");
    printf("\n\t\t----------");
    printf("\nPlease select a book :)");
    printf("\n=======================");
    printf("\n\tTITLE\t\t\t\t\t\tPRICE");
    printf("\n A - David (Bible Graphic Novels)\t\t      PHP 180.00");
    printf("\n B - What's Heaven?\t\t\t\t      PHP 95.00");
    printf("\n C - Graphic Novel - Jacob\t\t\t      PHP 40.00  ");
    printf("\n D - My First Prayers\t\t\t\t      PHP 200.00");
    printf("\n E - Graphic Novel - Road to Jerusalem\t\t      PHP 40.00");
    printf("\n F - Noah And The Ark (Ready To Read)\t\t      PHP 125.00");
    printf("\n G - Corrie Ten Boom: Her Life Her Faith\t      PHP 75.00");
    printf("\n H - Picture Bible Stories - The Easter Story\t      PHP 145.00");
    printf("\n I - Picture Bible Stories - Stories Jesus Told\t      PHP 145.00");
    printf("\n J - Rock-A-Bye Christmas (God Rocks! Bibletoons)     PHP 50.00");
    printf("\n Q - Back");
    printf("\n Enter selection: ");
}

void childrenD() {
	system("cls"); 
	printf("\n\t\tGROWING UP & FACTS OF LIFE!");
    printf("\n\t\t-----------------------------");
    printf("\nPlease select a book :)");
    printf("\n=======================");
    printf("\n\tTITLE\t\t\t\t\t\t      PRICE");
    printf("\n A - Horses!\t\t\t\t\t\t    PHP 95.00");
    printf("\n B - How to be a friend\t\t\t\t\t    PHP 50.00");
    printf("\n C - The Treasure Map of Boys\t\t\t\t    PHP 324.00");
    printf("\n D - No Biz Like Show Biz (The Flinstones)\t\t    PHP 50.00");
    printf("\n E - Compassion: Zack Lends a Hand\t\t\t    PHP 120.00");
    printf("\n F - Discovering America (Rugrats)\t\t\t    PHP 50.00");
    printf("\n G - Teamwork!\t\t\t\t\t\t    PHP 50.00");
    printf("\n H - One Smile\t\t\t\t\t\t    PHP 150.00");
    printf("\n I - Wonder\t\t\t\t\t\t    PHP 555.00");
    printf("\n J - The Boy in the Striped Pajamas\t\t\t    PHP 225.00");
    printf("\n Q - Back");
    printf("\n Enter selection: ");
}

void childrenE() {
     system("cls");
     printf("\n\n\t\t\t\t\tHUMOR!");
     printf("\n\t\t\t\t\t------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t\tPRICE");
     printf("\n A - This Book Is Not Good For You\t\t      PHP 239.00");
     printf("\n B - Meet Patrick\t\t\t\t      PHP 120.00");
     printf("\n C - Clifford's Birthday Party\t\t\t      PHP 95.00");
     printf("\n D - Smash Trash!\t\t\t\t      PHP 50.00");
     printf("\n E - Toy Story 3 Junior Novelization\t\t      PHP 50.00");
     printf("\n F - Walt Disney's 101 Dalmatians\t\t      PHP 95.00");
     printf("\n G - Yucchy! Yucchy!\t\t\t\t      PHP 50.00");
     printf("\n H - More Pies!\t\t\t\t\t      PHP 180.00");
     printf("\n I - The True Meaning of Smekday\t\t      PHP 100.00");
     printf("\n J - Flipped\t\t\t\t\t      PHP 342.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}


void youngAdultMenu() {
     system("cls");
     printf("\n\n\t\t\t\tYOUNG-ADULT BOOKS!");
     printf("\n\t\t\t\t------------------");
     printf("\nPlease select a category :)");
     printf("\n===========================");
     printf("\n A - Love & Romance");
     printf("\n B - Literature & Fiction");
     printf("\n C - Fantasy");
     printf("\n D - Horror");
     printf("\n E - Mysteries");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void youngAdultA() {
     system("cls");
     printf("\n\n\t\t\t\tLOVE & ROMANCE!");
     printf("\n\t\t\t\t---------------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t\tPRICE");
     printf("\n A - Reached\t\t\t\t\t      PHP 474.00");
     printf("\n B - Paper Towns\t\t\t\t      PHP 399.00");
     printf("\n C - Every Day\t\t\t\t\t      PHP 399.00");
     printf("\n D - The Fault In Our Stars\t\t\t      PHP 399.00");
     printf("\n E - Crossed\t\t\t\t\t      PHP 360.00");
     printf("\n F - Looking for Alaska\t\t\t\t      PHP 345.00");
     printf("\n G - Beastly\t\t\t\t\t      PHP 292.50");
     printf("\n H - Matched\t\t\t\t\t      PHP 385.00");
     printf("\n I - The Selection\t\t\t\t      PHP 349.00");
     printf("\n J - Let It Snow: Three Holiday Romances\t      PHP 399.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void youngAdultB() {
     system("cls");
     printf("\n\n\t\t\t\tLITERATURE & FICTION!");
     printf("\n\t\t\t\t--------------------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t\tPRICE");
     printf("\n A - China Men\t\t\t\t\t     PHP 150.00");
     printf("\n B - The Catcher in the Rye\t\t\t     PHP 229.00");
     printf("\n C - The Maze Runner\t\t\t\t     PHP 359.00");
     printf("\n D - Ink Exchange\t\t\t\t     PHP 170.00");
     printf("\n E - The Little Prince\t\t\t\t     PHP 225.00");
     printf("\n F - The Perks of Being A Wallflower\t\t     PHP 299.00");
     printf("\n G - Pandemonium\t\t\t\t     PHP 279.00");
     printf("\n H - The Hobbit\t\t\t\t\t     PHP 299.00");
     printf("\n I - Charlie Bone And The Time Twister\t\t     PHP 150.00");
     printf("\n J - Will Grayson, Will Grayson\t\t\t     PHP 365.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void youngAdultC() {
     system("cls");
     printf("\n\n\t\t\t\tFANTASY!");
     printf("\n\t\t\t\t--------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t\tPRICE");
     printf("\n A - The Warlock\t\t\t\t     PHP 420.00");
     printf("\n B - The Rise of Nine\t\t\t\t     PHP 277.00");
     printf("\n C - The Body Finder\t\t\t\t     PHP 175.00");
     printf("\n D - Wisdom's Kiss\t\t\t\t     PHP 399.00");
     printf("\n E - Insurgent\t\t\t\t\t     PHP 399.00");
     printf("\n F - The Giver\t\t\t\t\t     PHP 299.00");
     printf("\n G - The Cup of the World\t\t\t     PHP 180.00");
     printf("\n H - I Am Number Four\t\t\t\t     PHP 168.00");
     printf("\n I - Bewitching\t\t\t\t\t     PHP 299.00");
     printf("\n J - Torment (Fallen)\t\t\t\t     PHP 359.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void youngAdultD() {
     system("cls");
     printf("\n\n\t\t\t\tHORROR!");
     printf("\n\t\t\t\t-------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t\t  PRICE");
     printf("\n A - Romeo & Juliet & Vampires\t\t\t        PHP 170.00");
     printf("\n B - Kisses from Hell\t\t\t\t        PHP 250.00");
     printf("\n C - Vampireville\t\t\t\t        PHP 130.00");
     printf("\n D - The Haunted\t\t\t\t        PHP 320.00");
     printf("\n E - The Replacement\t\t\t\t        PHP 260.00");
     printf("\n F - Shadowed Summer\t\t\t\t        PHP 249.00");
     printf("\n G - Ghostgirl: Homecoming\t\t\t        PHP 200.00");
     printf("\n H - City of Fallen Angels (The Mortal Instruments)     PHP 385.00");
     printf("\n I - Hourglass\t\t\t\t\t        PHP 150.00");
     printf("\n J - Afterlife\t\t\t\t\t        PHP 150.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void youngAdultE() {
     system("cls");
     printf("\n\n\t\t\t\tMysteries!");
     printf("\n\t\t\t\t----------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t      PRICE");
     printf("\n A - Crescendo (The Hush, Hush Saga)\t\t   PHP 295.00");
     printf("\n B - Academy 7\t\t\t\t           PHP 250.00");
     printf("\n C - Set in Stone\t\t\t\t   PHP 149.00");
     printf("\n D - Miss Peregrine's Home for Peculiar Children   PHP 399.00");
     printf("\n E - Thirteen Reasons Why\t\t\t   PHP 385.00");
     printf("\n F - The Power of Six\t\t\t\t   PHP 279.00");
     printf("\n G - SVU: Love and Murder\t\t\t   PHP 39.50");
     printf("\n H - The Name of the Star (Shades of London)\t   PHP 499.00");
     printf("\n I - Night School (A Blood Coven Vampire Novel)\t   PHP 199.00");
     printf("\n J - The Ersatz Elevator\t\t\t   PHP 90.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}


void adultMenu() {
     system("cls"); 
	printf("\n\t\tADULT'S BOOKS!");
    printf("\n\t\t-----------------");
    printf("\nPlease select a category :)");
    printf("\n===========================");
    printf("\n A - Literature & Fiction");
    printf("\n B - Business & Money");
    printf("\n C - Self-Help");
    printf("\n D - Romance");
    printf("\n E - Biographies & Memoirs");
    printf("\n Q - Quit");
    printf("\n Enter selection: ");
}

void adultA() {
     system("cls");
     printf("\n\n\t\t\t\tLiterature & Fiction!");
     printf("\n\t\t\t\t---------------------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\tPRICE");
     printf("\n A - The Enchantress of Florence\t     PHP 175.00");
     printf("\n B - Death in the Clouds\t\t     PHP 100.00");
     printf("\n C - The Fortunate Traveller\t\t     PHP 250.00");
     printf("\n D - Oedipus: Myth and Dramatic Form\t     PHP 175.00");
     printf("\n E - The Inspector General\t\t     PHP 62.50");
     printf("\n F - Home and Exile\t\t\t     PHP 213.00");
     printf("\n G - One Hundred and One Ways\t\t     PHP 180.00");
     printf("\n H - The Family Corleone\t\t     PHP 399.00");
     printf("\n I - 4 Blondes\t\t\t\t     PHP 149.00");
     printf("\n J - Crime and Punishment\t\t     PHP 300.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void adultB() {
     system("cls");
     printf("\n\n\t\t\t\tBusiness & Money!");
     printf("\n\t\t\t\t-----------------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t\tPRICE");
     printf("\n A - How Toyota became number one\t\t     PHP 295.00");
     printf("\n B - Enterprise One to One\t\t\t     PHP 175.00");
     printf("\n C - The World Is Flat\t\t\t\t     PHP 175.00");
     printf("\n D - Rich Dad, Poor Dad\t\t\t\t     PHP 300.00");
     printf("\n E - Are You Smart Enough to Work at Google?\t     PHP 320.00");
     printf("\n F - Who Moved My Cheese?\t\t\t     PHP 295.00");
     printf("\n G - Jump Start: A Technopreneurship Fable\t     PHP 335.00");
     printf("\n H - How Full Is Your Bucket?\t\t\t     PHP 349.00");
     printf("\n I - Principle Centered Leadership\t\t     PHP 150.00");
     printf("\n J - Soccernomics\t\t\t\t     PHP 150.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void adultC() {
     system("cls");
     printf("\n\n\t\t\t\tSelf-Help!");
     printf("\n\t\t\t\t----------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t\tPRICE");
     printf("\n A - Unleashing the Ideavirus\t\t\t      PHP 270.00");
     printf("\n B - What Matters Now\t\t\t\t      PHP 250.00");
     printf("\n C - The Quiet Answer\t\t\t\t      PHP 175.00");
     printf("\n D - Loving Your Job, Finding Your Passion\t      PHP 180.00");
     printf("\n E - You Can Heal Your Life\t\t\t      PHP 295.00");
     printf("\n F - A Million Little Pieces\t\t\t      PHP 175.00");
     printf("\n G - Interpreting Dreams\t\t\t      PHP 250.00");
     printf("\n H - The Tao of Inner Peace\t\t\t      PHP 175.00");
     printf("\n I - 59 Seconds\t\t\t\t\t      PHP 200.00");
     printf("\n J - The Art of Public Speaking\t\t\t      PHP 90.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void adultD() {
     system("cls");
     printf("\n\n\t\t\t\tRomance!");
     printf("\n\t\t\t\t--------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\tPRICE");
     printf("\n A - Ransom My Heart\t\t\t      PHP 399.00");
     printf("\n B - Fire and Ice: A Novel\t\t      PHP 180.00");
     printf("\n C - Pride and Prejudice\t\t      PHP 150.00");
     printf("\n D - Brighter Than the Sun\t\t      PHP 199.00");
     printf("\n E - Fifty Shades of Grey\t\t      PHP 432.25");
     printf("\n F - Just As I Am: A Novel\t\t      PHP 150.00");
     printf("\n G - Until Forever\t\t\t      PHP 75.00");
     printf("\n H - The Devil's Daughter\t\t      PHP 95.00");
     printf("\n I - Story of My Life\t\t\t      PHP 100.0");
     printf("\n J - Five Days in Paris\t\t\t      PHP 299.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}

void adultE() {
     system("cls");
     printf("\n\n\t\t\t\tBiographies & Memoirs!");
     printf("\n\t\t\t\t----------------------");
     printf("\nPlease select a book to add to cart :)");
     printf("\n======================================");
     printf("\n\tTITLE\t\t\t\t\t\t\tPRICE");
     printf("\n A - The Year of Magical Thinking\t\t\t      PHP 250.00");
     printf("\n B - Passionate Minds: Women Rewriting the World\t      PHP 250.00");
     printf("\n C - The Rise of Theodore Roosevelt\t\t\t      PHP 200.00");
     printf("\n D - Tuesdays with Morrie\t\t\t\t      PHP 250.00");
     printf("\n E - Pacman : Kuwento ng Pag-Asa, Tiyaga, at Determinasyon    PHP 95.00");
     printf("\n F - The Fortunate Pilgrim\t\t\t\t      PHP 216.00");
     printf("\n G - Goodbye to a River: A Narrative\t\t\t      PHP 175.00");
     printf("\n H - The Good Rat\t\t\t\t\t      PHP 275.00");
     printf("\n I - Beckham\t\t\t\t\t\t      PHP 200.00");
     printf("\n J - The Ship Thieves\t\t\t\t\t      PHP 220.00");
     printf("\n Q - Quit");
     printf("\n Enter selection: ");
}


float getBooks(FILE *fp) {
	bool quit = false;
	int ageGroup = NONE, categoryChosen = 0;
	float totalPrice = 0;
	char selection;
	scanf("%c", &selection);
	
	while (!quit) {
		switch(ageGroup) {
			case NONE: switch(selection)
						{
							case 'A':
							case 'a': childrenMenu();
									ageGroup = CHILD;
									break;
							
							case 'B':
							case 'b': youngAdultMenu(); 
									ageGroup = YADULT;
									break;
							
							case 'C':
							case 'c': adultMenu(); 
									ageGroup = ADULT;
									break;
							
							case 'Q':
							case 'q': quit = true;
									break;

						}
						break;
			
			//CHILD**CHILD**CHILD**CHILD**CHILD**CHILD**CHILD**CHILD**CHILD**
			
			case CHILD: switch(selection)
						{
							case 'A':
							case 'a': if (!categoryChosen) {
										childrenA();
										categoryChosen = 1;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Incredible Journey\" was added to cart\n\n Enter Selection: ");
												fprintf(fp, "The Incredible Journey\t\t\t      PHP 90.00\n");
												totalPrice += 90;
												break;
												
											case 2: printf("\n \"Trollz: All That Glitters\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Trollz: All That Glitters\t\t      PHP 50.00\n");
												totalPrice += 50;
												break;
												
											case 3: printf("\n \"David (Bible Graphic Novels)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"David (Bible Graphic Novels)\t\t      PHP 180.00\n");
												totalPrice += 180;
												break;
												
											case 4: printf("\n \"Horses!\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Horses!\t\t\t\t\t      PHP 95.00\n");
												totalPrice += 95;
												break;
												
											case 5: printf("\n \"This Book Is Not Good For You!\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"This Book Is Not Good For You\t\t      PHP 239.00\n");
                                                totalPrice += 239;
												break;
										}
									}
									break;
							
							case 'B':
							case 'b': if (!categoryChosen) {
										childrenB();
										categoryChosen = 2;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Battle for Skandia\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Battle for Skandia\t\t\t      PHP 248.00\n");
												totalPrice += 248;
												break;
												
											case 2: printf("\n \"Ramona's World (Ramona Series)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Ramona's World (Ramona Series)\t\t      PHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 3: printf("\n \"What's Heaven?\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"What's Heaven?\t\t\t\t      PHP 95.00\n");
												totalPrice += 95;
												break;
												
											case 4: printf("\n \"How to be a friend\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"How to be a friend\t\t\t      PHP 50.00\n");
												totalPrice += 50;
												break;
												
											case 5:  printf("\n \"Meet Patrick\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Meet Patrick\t\t\t\t      PHP 120.00\n");
												totalPrice += 120;
												break;
										}
									}
									break;
							
							case 'C':
							case 'c': if (!categoryChosen) {
										childrenC();
										categoryChosen = 3;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Beyond the Valley of Thorns\" was added to cart\n\n Enter Selection: ");
												fprintf(fp, "Beyond the Valley of Thorns\t\t      PHP 100.00\n");
												totalPrice += 100;
												break;
												
											case 2: printf("\n \"The Little Prince\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Little Prince\t\t\t      PHP 225.00\n");
												totalPrice += 225;
												break;
												
											case 3: printf("\n \"Graphic Novel - Jacob\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Graphic Novel - Jacob\t\t\t      PHP 40.00\n");
												totalPrice += 40;
												break;
												
											case 4: printf("\n \"The Treasure Map of Boys\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Treasure Map of Boys\t\t      PHP 324.00\n");
												totalPrice += 324;
												break;
												
											case 5: printf("\n \"Clifford's Birthday Party\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Clifford's Birthday Party\t\t\t      PHP 95.00\n");
												totalPrice += 95;
												break;
										}
									}
									break;
							
							case 'D':
							case 'd': if (!categoryChosen) {
										childrenD();
										categoryChosen = 4;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Tenth City\" was added to cart\n\n Enter Selection: ");
												fprintf(fp, "The Tenth City\t\t\t\t      PHP 100.00\n");
												totalPrice += 100;
												break;
												
											case 2: printf("\n \"Junie B. First Grader At Last!\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Junie B. First Grader At Last!\t\t      PHP 50.00\n");
												totalPrice += 50;
												break;
												
											case 3: printf("\n \"My First Prayers\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"My First Prayers\t\t\t      PHP 200.00\n");
												totalPrice += 200;
												break;
												
											case 4: printf("\n \"No Biz Like Show Biz (The Flinstones)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"No Biz Like Show Biz (The Flinstones)\t      PHP 50.00\n");
												totalPrice += 50;
												break;
												
											case 5: printf("\n \"Smash Trash!\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Smash Trash!\t\t\t\t      PHP 50.00\n");
												totalPrice += 50;
												break;
										}
									}
									break;
							
							case 'E':
							case 'e': if (!categoryChosen) {
										childrenE();
										categoryChosen = 5;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Last Battle (The Chronicles of Narnia)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Last Battle (The Chronicles of Narnia)    PHP 100.00\n");
												totalPrice += 100;
												break;
												
											case 2: printf("\n \"Summerland\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Summerland\t\t\t              PHP 250.00\n");
												totalPrice += 250;
												break;
												
											case 3: printf("\n \"Graphic Novel - Road to Jerusalem\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Graphic Novel - Road to Jerusalem\t      PHP 40.00\n");
												totalPrice += 40;
												break;
												
											case 4: printf("\n \"Compassion: Zack Lends a Hand\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Compassion: Zack Lends a Hand\t\t      PHP 120.00\n");
												totalPrice += 120;
												break;
												
											case 5: printf("\n \"Toy Story 3 Junior Novelization\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Toy Story 3 Junior Novelization\t\t      PHP 50.00\n");
												totalPrice += 50;
												break;
												break;
										}
									}
									break;
									
							case 'F':
							case 'f': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"George's Marvelous Medicine\" was added to cart\n\n Enter Selection: ");
												fprintf(fp, "George's Marvelous Medicine\t\t      PHP 100.00\n");
												totalPrice += 100;
												break;
												
											case 2: printf("\n \"The Twits\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Twits\t\t\t              PHP 125.00\n");
												totalPrice += 125;
												break;
												
											case 3: printf("\n \"Noah And The Ark (Ready To Read)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Noah And The Ark (Ready To Read)\t      PHP 125.00\n");
												totalPrice += 125;
												break;
												
											case 4: printf("\n \"Discovering America (Rugrats)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Discovering America (Rugrats)\t\t      PHP 50.00\n");
												totalPrice += 50;
												break;
												
											case 5:  printf("\n \"Walt Disney's 101 Dalmatians\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Walt Disney's 101 Dalmatians\t\t      PHP 95.00\n");
												totalPrice += 95;
												break;
										}
									}
									break;
							
							case 'G':
							case 'g': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"James and the Giant Peach\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"James and the Giant Peach\t\t      PHP 90.00\n");
												totalPrice += 90;
												break;
												
											case 2: printf("\n \"Charlie Bone And The Time Twister\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Charlie Bone And The Time Twister\t      PHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 3: printf("\n \"Corrie Ten Boom: Her Life Her Faith\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Corrie Ten Boom: Her Life Her Faith\t      PHP 75.00\n");
												totalPrice += 75;
												break;
												
											case 4: printf("\n \"Teamwork!\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Teamwork!\t\t\t\t      PHP 50.00\n");
												totalPrice += 50;
												break;
												
											case 5: printf("\n \"Yucchy! Yucchy!\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Yucchy! Yucchy!\t\t\t\t      PHP 50.00\n");
												totalPrice += 50;
												break;
										}
									}
									break;
							
							case 'H':
							case 'h': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Adventure of the Copper Beeches\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Adventure of the Copper Beeches\t      PHP 100.00\n");
												totalPrice += 100;
												break;
												
											case 2: printf("\n \"Chancy and the Grand Rascal\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Chancy and the Grand Rascal\t\t      PHP 95.00\n");
												totalPrice += 95;
												break;
												
											case 3: printf("\n \"Picture Bible Stories - The Easter Story\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Picture Bible Stories - The Easter Story      PHP 145.00\n");
												totalPrice += 145;
												break;
												
											case 4: printf("\n \"One Smile\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"One Smile\t\t\t\t      PHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 5: printf("\n \"More Pies!\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"More Pies!\t\t\t\t\t      PHP 180.00\n");
												totalPrice += 180;
												break;
										}
									}
									break;
							
							case 'I':
							case 'i': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Moby-Dick\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Moby-Dick\t\t\t\t      PHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 2: printf("\n \"Esio Trot\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Esio Trot\t\t\t\t      PHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 3: printf("\n \"Picture Bible Stories - Stories Jesus Told\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Picture Bible Stories - Stories Jesus Told    PHP 145.00\n");
												totalPrice += 145;
												break;
												
											case 4: printf("\n \"Wonder\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Wonder\t\t\t\t\t      PHP 555.00\n");
												totalPrice += 555;
												break;
												
											case 5: printf("\n \"The True Meaning of Smekday\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The True Meaning of Smekday\t\t      PHP 100.00\n");
												totalPrice += 100;
												break;
										}
									}
									break;
							
							case 'J':
							case 'j': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Apollo 13\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Apollo 13\t\t\t\t      PHP 95.00\n");
												totalPrice += 95;
												break;
												
											case 2: printf("\n \"Charlie and the Great Glass Elevator\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Charlie and the Great Glass Elevator\t      PHP 280.00\n");
												totalPrice += 280;
												break;
												
											case 3: printf("\n \"Rock-A-Bye Christmas (God Rocks! Bibletoons)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Rock-A-Bye Christmas (God Rocks! Bibletoons)  PHP 50.00\n");
												totalPrice += 50;
												break;
												
											case 4: printf("\n \"The Boy in the Striped Pajamas\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Boy in the Striped Pajamas\t\t      PHP 225.00\n");
												totalPrice += 225;
												break;
												
											case 5: printf("\n \"Flipped\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Flipped\t\t\t\t\t      PHP 342.00\n");
												totalPrice += 342;
												break;
										}
									}
									break;
							
							case 'Q':
							case 'q': if (!categoryChosen) {
										ageGroup = NONE;
										displayMainMenu();
									}
									else {
										categoryChosen = 0;
										childrenMenu();
									} 
									break;
						}
						break;
						
			//YOUNG*ADULT**YOUNG*ADULT**YOUNG*ADULT**YOUNG*ADULT**YOUNG*ADULT**YOUNG*ADULT**
						
			case YADULT: switch(selection)
						{
							case 'A':
							case 'a': if (!categoryChosen) {
										youngAdultA();
										categoryChosen = 1;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Reached\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Reached\t\t\t\t\t      PHP 474.00\n");
												totalPrice += 474;
												break;
												
											case 2: printf("\n \"China Men\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"China Men\t\t\t\t\t     PHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 3: printf("\n \"The Warlock\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Warlock\t\t\t\t\tPHP 420.00\n");
												totalPrice += 420;
												break;
												
											case 4: printf("\n \"Romeo & Juliet & Vampires\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Romeo & Juliet & Vampires\t\t\t\t\tPHP 170\n");
												totalPrice += 170;
												break;
												
											case 5: printf("\n \"Crescendo (The Hush, Hush Saga)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Crescendo (The Hush, Hush Saga)\t\t\t\t\tPHP 295.00\n");
												totalPrice += 295;
												break;
										}
									}
									break;
							
							case 'B':
							case 'b': if (!categoryChosen) {
										youngAdultB();
										categoryChosen = 2;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Paper Towns\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Paper Towns\t\t\t\t      PHP 399.00\n");
												totalPrice += 399;
												break;
												
											case 2: printf("\n \"The Catcher in the Rye\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Catcher in the Rye\t\t\t     PHP 229.00\n");
												totalPrice += 229;
												break;
												
											case 3: printf("\n \"The Rise of Nine\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Rise of Nine\t\t\t\t\tPHP 277.00\n");
												totalPrice += 277;
												break;
												
											case 4: printf("\n \"Kisses from Hell\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Kisses from Hell\t\t\t\t\tPHP 250.00\n");
												totalPrice += 250;
												break;
												
											case 5: printf("\n \"Academy 7\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Academy 7\t\t\t\t\tPHP 250.00\n");
												totalPrice += 250;
												break;
										}
									}
									break;
							
							case 'C':
							case 'c': if (!categoryChosen) {
										youngAdultC();
										categoryChosen = 3;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Every Day\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Every Day\t\t\t\t\t      PHP 399.00\n");
												totalPrice += 399;
												break;
												
											case 2: printf("\n \"The Maze Runner\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Maze Runner\t\t\t\t     PHP 359.00\n");
												totalPrice += 359;
												break;
												
											case 3: printf("\n \"The Body Finder\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Body Finder\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 4: printf("\n \"Vampireville\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Vampireville\t\t\t\t\tPHP 130.00\n");
												totalPrice += 130;
												break;
												
											case 5: printf("\n \"Set in Stone\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Set in Stone\t\t\t\t\tPHP 149.00\n");
												totalPrice += 149;
												break;
										}
									}
									break;
							
							case 'D':
							case 'd': if (!categoryChosen) {
										youngAdultD();
										categoryChosen = 4;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Fault In Our Stars\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Fault In Our Stars\t\t\t      PHP 399.00\n");
												totalPrice += 399;
												break;
												
											case 2: printf("\n \"Ink Exchange\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Ink Exchange\t\t\t\t     PHP 170.00\n");
												totalPrice += 170;
												break;
												
											case 3: printf("\n \"Wisdom's Kiss\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Wisdom's Kiss\t\t\t\t\tPHP 399.00\n");
												totalPrice += 399;
												break;
												
											case 4: printf("\n \"The Haunted\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Haunted\t\t\t\t\tPHP 320.00\n");
												totalPrice += 320;
												break;
												
											case 5: printf("\n \"Miss Peregrine's Home for Peculiar Children\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Miss Peregrine's Home for Peculiar Children\t\t\t\t\tPHP 399.00\n");
												totalPrice += 399;
												break;
										}
									}
									break;
							
							case 'E':
							case 'e': if (!categoryChosen) {
										youngAdultE();
										categoryChosen = 5;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Crossed\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Crossed\t\t\t\t\t      PHP 360.00\n");
												totalPrice += 360;
												break;
												
											case 2: printf("\n \"The Little Prince\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Little Prince\t\t\t\t     PHP 225.00\n");
												totalPrice += 225;
												break;
												
											case 3: printf("\n \"Insurgent\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Insurgent\t\t\t\t\tPHP 399.00\n");
												totalPrice += 399;
												break;
												
											case 4: printf("\n \"The Replacement\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Replacement\t\t\t\t\tPHP 260.00\n");
												totalPrice += 260;
												break;
												
											case 5: printf("\n \"Thirteen Reasons Why\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Thirteen Reasons Why\t\t\t\t\tPHP 385.00\n");
												totalPrice += 385;
												break;
										}
									}
									break;
									
							case 'F':
							case 'f': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Looking for Alaska\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Looking for Alaska\t\t\t\t      PHP 345.00\n");
												totalPrice += 345;
												break;
												
											case 2: printf("\n \"The Perks of Being A Wallflower\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Perks of Being A Wallflower\t\t     PHP 299.00\n");
												totalPrice += 299;
												break;
												
											case 3: printf("\n \"The Giver\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Giver\t\t\t\t\tPHP 299.00\n");
												totalPrice += 299;
												break;
												
											case 4: printf("\n \"Shadowed Summer\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Shadowed Summer\t\t\t\t\tPHP 249.00\n");
												totalPrice += 249;
												break;
												
											case 5: printf("\n \"The Power of Six\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Power of Six\t\t\t\t\tPHP 279.00\n");
												totalPrice += 279;
												break;
										}
									}
									break;
							
							case 'G':
							case 'g': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Beastly\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Beastly\t\t\t\t\t      PHP 292.50\n");
												totalPrice += 292.5;
												break;
												
											case 2: printf("\n \"Pandemonium\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Pandemonium\t\t\t\t     PHP 279.00\n");
												totalPrice += 279;
												break;
												
											case 3: printf("\n \"The Cup of the World\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Cup of the World\t\t\t\t\tPHP 180.00\n");
												totalPrice += 180;
												break;
												
											case 4: printf("\n \"Ghostgirl: Homecoming\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Ghostgirl: Homecoming\t\t\t\t\tPHP 200.00\n");
												totalPrice += 200;
												break;
												
											case 5: printf("\n \"SVU: Love and Murder\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"SVU: Love and Murder\t\t\t\t\tPHP 39.50\n");
												totalPrice += 39.5;
												break;
										}
									}
									break;
							
							case 'H':
							case 'h': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Matched\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Matched\t\t\t\t\t      PHP 385.00");
												totalPrice += 385;
												break;
												
											case 2: printf("\n \"The Hobbit\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Hobbit\t\t\t\t\t     PHP 299.00\n");
												totalPrice += 299;
												break;
												
											case 3: printf("\n \"I Am Number Four\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"I Am Number Four\t\t\t\t\tPHP 168.00\n");
												totalPrice += 168;
												break;
												
											case 4: printf("\n \"City of Fallen Angels (The Mortal Instruments)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"City of Fallen Angels (The Mortal Instruments)\t\t\t\t\tPHP 385.00\n");
												totalPrice += 385;
												break;
												
											case 5: printf("\n \"The Name of the Star (Shades of London)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Name of the Star (Shades of London)\t\t\t\t\tPHP 499.00\n");
												totalPrice += 499;
												break;
										}
									}
									break;
							
							case 'I':
							case 'i': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Selection\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Selection\t\t\t\t      PHP 349.00\n");
												totalPrice += 349;
												break;
												
											case 2: printf("\n \"Charlie Bone And The Time Twister\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Charlie Bone And The Time Twister\t\t     PHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 3: printf("\n \"Bewitching\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Bewitching\t\t\t\t\tPHP 299.00\n");
												totalPrice += 299;
												break;
												
											case 4: printf("\n \"Hourglass\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Hourglass\t\t\t\t\tPHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 5: printf("\n \"Night School (A Blood Coven Vampire Novel)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Night School (A Blood Coven Vampire Novel)\t\t\t\t\tPHP 199.00\n");
												totalPrice += 199;
												break;
										}
									}
									break;
							
							case 'J':
							case 'j': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Let It Snow: Three Holiday Romances\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Let It Snow: Three Holiday Romances\t      PHP 399.00\n");
												totalPrice += 399;
												break;
												
											case 2: printf("\n \"Will Grayson, Will Grayson\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Will Grayson, Will Grayson\t\t\t     PHP 365.00\n");
												totalPrice += 365;
												break;
												
											case 3: printf("\n \"Torment (Fallen)\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Torment (Fallen)\t\t\t\t\tPHP 359.00\n");
												totalPrice += 359;
												break;
												
											case 4: printf("\n \"Afterlife\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Afterlife\t\t\t\t\tPHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 5: printf("\n \"The Ersatz Elevator\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Ersatz Elevator (A Series of Unfortunate Events #6)\t\t\t\t\tPHP 90.00\n");
												totalPrice += 90;
												break;
										}
									}
									break;
							
							case 'Q':
							case 'q': if (!categoryChosen) {
										ageGroup = NONE;
										displayMainMenu();
									}
									else {
										categoryChosen = 0;
										youngAdultMenu();
									} 
									break;
						}
						break;
						
			//ADULT**ADULT**ADULT**ADULT**ADULT**ADULT**ADULT**ADULT**ADULT**
						
			case ADULT: switch(selection)
						{
							case 'A':
							case 'a': if (!categoryChosen) {
										adultA();
										categoryChosen = 1;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Enchantress of Florence\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Enchantress of Florence\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 2: printf("\n \"How Toyota became number one\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"How Toyota became number one\t\t\t\t\tPHP 295.00\n");
												totalPrice += 295;
												break;
												
											case 3: printf("\n \"Unleashing the Ideavirus\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Unleashing the Ideavirus\t\t\t\t\tPHP 270.00\n");
												totalPrice += 270;
												break;
												
											case 4: printf("\n \"Ransom My Heart\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Ransom My Heart\t\t\t\t\tPHP 399.00\n");
												totalPrice += 399;
												break;
												
											case 5: printf("\n \"The Year of Magical Thinking\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Year of Magical Thinking\t\t\t\t\tPHP 250.00\n");
												totalPrice += 250;
												break;
										}
									}
									break;
							
							case 'B':
							case 'b': if (!categoryChosen) {
										adultB();
										categoryChosen = 2;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Death in the Clouds\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Death in the Clouds\t\t\t\t\tPHP 100.00\n");
												totalPrice += 100;
												break;
												
											case 2: printf("\n \"Enterprise One to One\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Enterprise One to One\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 3: printf("\n \"What Matters Now\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"What Matters Now\t\t\t\t\tPHP 250.00\n");
												totalPrice += 250;
												break;
												
											case 4: printf("\n \"Fire and Ice: A Novel\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Fire and Ice: A Novel\t\t\t\t\tlPHP 180.00\n");
												totalPrice += 180;
												break;
												
											case 5: printf("\n \"Passionate Minds: Women Rewriting the World\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Passionate Minds: Women Rewriting the World\t\t\t\t\tPHP 250.00\n");
												totalPrice += 250;
												break;
										}
									}
									break;
							
							case 'C':
							case 'c': if (!categoryChosen) {
										adultC();
										categoryChosen = 3;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Fortunate Traveller\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Fortunate Traveller\t\t\t\t\tPHP 250.00\n");
												totalPrice += 250;
												break;
												
											case 2: printf("\n \"The World Is Flat\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The World Is Flat\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 3: printf("\n \"The Quiet Answer\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Quiet Answer\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 4: printf("\n \"Pride and Prejudice\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Pride and Prejudice\t\t\t\t\tPHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 5: printf("\n \"The Rise of Theodore Roosevelt\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Rise of Theodore Roosevelt\t\t\t\t\tPHP 200.00\n");
												totalPrice += 200;
												break;
										}
									}
									break;
							
							case 'D':
							case 'd': if (!categoryChosen) {
										adultD();
										categoryChosen = 4;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Oedipus: Myth and Dramatic Form\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Oedipus: Myth and Dramatic Form\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 2: printf("\n \"Rich Dad, Poor Dad\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Rich Dad, Poor Dad\t\t\t\t\tPHP 300.00\n");
												totalPrice += 300;
												break;
												
											case 3: printf("\n \"Loving Your Job, Finding Your Passion\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Loving Your Job, Finding Your Passion\t\t\t\t\tPHP 180.00\n");
												totalPrice += 180;
												break;
												
											case 4: printf("\n \"Brighter Than the Sun\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Brighter Than the Sun\t\t\t\t\tPHP 199.00\n");
												totalPrice += 199;
												break;
												
											case 5: printf("\n \"Tuesdays with Morrie\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Tuesdays with Morrie\t\t\t\t\tPHP 250.00\n");
												totalPrice += 250;
												break;
										}
									}
									break;
							
							case 'E':
							case 'e': if (!categoryChosen) {
										adultE();
										categoryChosen = 5;
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Inspector General\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Inspector General\t\t\t\t\tPHP 62.50\n");
												totalPrice += 62.5;
												break;
												
											case 2: printf("\n \"Are You Smart Enough to Work at Google?\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Are You Smart Enough to Work at Google?\t\t\t\t\tPHP 320.00\n");
												totalPrice += 320;
												break;
												
											case 3: printf("\n \"You Can Heal Your Life\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"You Can Heal Your Life\t\t\t\t\tPHP 295.00\n");
												totalPrice += 295;
												break;
												
											case 4: printf("\n \"Fifty Shades of Grey\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Fifty Shades of Grey\t\t\t\t\tPHP 432.25\n");
												totalPrice += 432.25;
												break;
												
											case 5: printf("\n \"Pacman : Kuwento ng Pag-Asa, Tiyaga, at Determinasyon\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Pacman : Kuwento ng Pag-Asa, Tiyaga, at DeterminasyonPHP 95.00\n");
												totalPrice += 95;
												break;
										}
									}
									break;
									
							case 'F':
							case 'f': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Home and Exile\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Home and Exile\t\t\t\t\tPHP 213.00\n");
												totalPrice += 213;
												break;
												
											case 2: printf("\n \"Who Moved My Cheese?\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Who Moved My Cheese?\t\t\t\t\tPHP 295.00\n");
												totalPrice += 295;
												break;
												
											case 3: printf("\n \"A Million Little Pieces\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"A Million Little Pieces\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 4: printf("\n \"Just As I Am: A Novel\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Just As I Am: A Novel\t\t\t\t\tPHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 5: printf("\n \"The Fortunate Pilgrim\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Fortunate Pilgrim\t\t\t\t\tPHP 216.00\n");
												totalPrice += 216;
												break;
										}
									}
									break;
							
							case 'G':
							case 'g': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"One Hundred and One Ways\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"One Hundred and One Ways\t\t\t\t\tPHP 180.00\n");
												totalPrice += 180;
												break;
												
											case 2: printf("\n \"Jump Start: A Technopreneurship Fable\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Jump Start: A Technopreneurship Fable\t\t\t\t\tPHP 335.00\n");
												totalPrice += 335;
												break;
												
											case 3: printf("\n \"Interpreting Dreams\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Interpreting Dreams\t\t\t\t\tPHP 250.00\n");
												totalPrice += 250;
												break;
												
											case 4: printf("\n \"Until Forever\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Until Forever\t\t\t\t\tPHP 75.00\n");
												totalPrice += 75;
												break;
												
											case 5: printf("\n \"Goodbye to a River: A Narrative\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Goodbye to a River: A Narrative\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
										}
									}
									break;
							
							case 'H':
							case 'h': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"The Family Corleone\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Family Corleone\t\t\t\t\tPHP 399.00\n");
												totalPrice += 399;
												break;
												
											case 2: printf("\n \"How Full Is Your Bucket?\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"How Full Is Your Bucket?\t\t\t\t\tPHP 349.00\n");
												totalPrice += 349;
												break;
												
											case 3: printf("\n \"The Tao of Inner Peace\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Tao of Inner Peace\t\t\t\t\tPHP 175.00\n");
												totalPrice += 175;
												break;
												
											case 4: printf("\n \"The Devil's Daughter\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Devil's Daughter\t\t\t\t\tPHP 95.00\n");
												totalPrice += 95;
												break;
												
											case 5: printf("\n \"The Good Rat\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Good Rat\t\t\t\t\tPHP 275.00\n");
												totalPrice += 275;
												break;
										}
									}
									break;
							
							case 'I':
							case 'i': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"4 Blondes\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"4 Blondes\t\t\t\t\tPHP 149.00\n");
												totalPrice += 149;
												break;
												
											case 2: printf("\n \"Principle Centered Leadership\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Principle Centered Leadership\t\t\t\t\tPHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 3: printf("\n \"59 Seconds\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"59 Seconds\t\t\t\t\tPHP 200.00\n");
												totalPrice += 200;
												break;
												
											case 4: printf("\n \"Story of My Life\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Story of My Life\t\t\t\t\tPHP 100.0\n");
												totalPrice += 100;
												break;
												
											case 5: printf("\n \"Beckham\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Beckham\t\t\t\t\tPHP 200.00\n");
												totalPrice += 200;
												break;
										}
									}
									break;
							
							case 'J':
							case 'j': if (!categoryChosen) {
									}
									else {
										switch (categoryChosen) {
											case 1: printf("\n \"Crime and Punishment\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Crime and Punishment\t\t\t\t\tPHP 300.00\n");
												totalPrice += 300;
												break;
												
											case 2: printf("\n \"Soccernomics\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Soccernomics\t\t\t\t\tPHP 150.00\n");
												totalPrice += 150;
												break;
												
											case 3: printf("\n \"The Art of Public Speaking\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Art of Public Speaking\t\t\t\t\tPHP 90.00\n");
												totalPrice += 90;
												break;
												
											case 4: printf("\n \"Five Days in Paris\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"Five Days in Paris\t\t\t\t\tPHP 299.00\n");
												totalPrice += 299;
												break;
												
											case 5: printf("\n \"The Ship Thieves\" was added to cart\n\n Enter Selection: ");
												fprintf(fp,"The Ship Thieves\t\t\t\t\tPHP 220.00\n");
												totalPrice += 220;
												break;
										}
									}
									break;
							
							case 'Q':
							case 'q': if (!categoryChosen) {
										ageGroup = NONE;
										displayMainMenu();
									}
									else {
										categoryChosen = 0;
										youngAdultMenu();
									} 
									break;
						}
						break;
		}
		scanf("%c", &selection);
	}
	
	return totalPrice;
}

int main() {
	FILE *fp;
	float totalPrice;
	
	fp = fopen("Order Slip.txt", "w");
	
	displayMainMenu();
	totalPrice = getBooks(fp);
	printf("\n\nTotal Price of Books: %.2f", totalPrice);
	
	fprintf(fp,"---------------------------------------------------------\n\n");
	fprintf(fp,"TOTAL:\t\t\t\t\t      PHP %.2f", totalPrice);
	
	printf("\nPlease see \"Order Slip.txt\" to see your order.");
	printf("\nBye!\n");
	
	fclose(fp);
	getch();

	return 0;
}

