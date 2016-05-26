#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "user.h"
using namespace std;
class folder
{
public:
	string name;
	string pref;
	vector <folder*> v;
	user* uptr;
	folder* parrent;


	folder(void); 
	folder(user* u, string name);
	~folder(void);

	void print_all(folder *root); // print all system
	void list();// print only this folder

	void create_folder(string name); // to create folder
	void create_file(string name);   // to crerate file
	void create_siml(string name, string nf); // to create siml

	folder* change_folder(string name);  // It allows you to navigate one folder between folders
	folder* previous(); // to move to the previous folder

	void delete_file(string name); // to delete file
	void delete_folder(string name); // to delete folder
	void delete_siml(string name);  // to delete siml

	void read_file(string name);   // to read file
	void write_file(string name); // to write in file
	void open_siml(string name);  // to open siml

    void change_user(user* u, folder* root); // to change user

	void find_file(string name); // to find file
	void copy_folder(string name); // recursive copy directories
};

