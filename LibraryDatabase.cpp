#include "LibraryDatabase.h"
 
LibraryDatabase::LibraryDatabase()
 {
	 User account1( 98765, "Katsuki Bakugou", "FutureNo1", "dynamight1@email.com", "0XXXXXXXXXXXX", "Level-2", "Student");
	 User account2( 12345, "Satoru Gojo", "Limitless69", "TheStrongest69@email.com", "0XXXXXXXXXXXX", "Level-1", "Faculty");
	 User account3( 51982, "Alastor Morningstar", "AceSleeve666", "radiodemon@email.com", "0XXXXXXXXXXXX", "Level-3", "Public");
	
	 accounts.push_back(account1);
	 accounts.push_back(account2); 
	 accounts.push_back(account3); 

	 Book book1(10208, "Sherlock Holmes: A Study In Scarlet", 1887, "English", "This story marks the first appearance of Sherlock Holmes and Dr. Watson.", true, "Detective", 9781421808000, "Sir Arthur Conan Doyle");
	 Magazine magazine1(82546, "S-F Magazine", 1960, "Japanese", "First successful commercial science fiction magazine in Japan.", false , "Science-fiction", 5,"Hayakawa Shobo");
	 DVD dvd1(49371, "Black Butler - Book of the Atlantic", 2017, "Japanese +English subtitles", "All aboard to the next great adventure for Ciel and his demonic butler, Sebastian!", true, "Animation", "Movie", 100, "Noriyuki Abe");
	 magazine1.setLend("20.04.2024");


	 books.push_back(book1); 
	 magazines.push_back(magazine1);
	 dvds.push_back(dvd1);

	 } 

 
User* LibraryDatabase::getAccount(int accountNumber)
 {
	
		 for (size_t i = 0; i < accounts.size(); i++)
		 {
		 
			 if (accounts[i].getID() == accountNumber)
			 return &accounts[i];
		 } 
	
		 return NULL; 
	 } 

Book* LibraryDatabase::getBook(int bookNumber) {
	for (size_t i = 0; i < books.size(); i++) {
		if (books[i].getID() == bookNumber)
			return &books[i];
	} 
	return NULL;
}

Magazine* LibraryDatabase::getMagazine(int magazineNumber) {
	for (size_t i = 0; i < books.size(); i++) {
		if (magazines[i].getID() == magazineNumber)
			return &magazines[i];
	}
	return NULL;
}

DVD* LibraryDatabase::getDvd(int dvdNumber) {
	for (size_t i = 0; i < dvds.size(); i++) {
		if (dvds[i].getID() == dvdNumber)
			return &dvds[i];
	}
	return NULL;
}
 
 bool LibraryDatabase::authenticateUser(int userAccountNumber, string userPIN) {
	 
	 User* const userAccountPtr = getAccount(userAccountNumber);
	
		
		 if (userAccountPtr != NULL)
		 return userAccountPtr->ValidatePass(userPIN);
	 else
		 return false; 
	 } 
