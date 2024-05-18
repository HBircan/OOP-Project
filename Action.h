 #ifndef ACTION_H
 #define ACTION_H

 class Screen;
 class Keyboard;
 class LibraryDatabase; 
 class User;

 class Action{
 private:
	 int userID;
	 Screen& screen; // reference to the screen of the ATM
	 Keyboard& keyboard;
	 LibraryDatabase& libraryDatabase; // reference to the account info database
 public:

	 Action(int, Screen&, Keyboard&, LibraryDatabase&);
	 virtual ~Action() { } // virtual destructor with empty body
	 virtual void Execute() = 0;
	
	 int getID() const;
     Screen & getScreen() const; // return reference to screen
	 Keyboard& getKeyboard() const;
	 LibraryDatabase & getLibraryDatabase() const; // return reference to database
	
 };
 #endif 
