#include "Binar_tree.cpp"
#include <vector>

template <class T> void text_menu(vector<Binar_tree<T>*> vec_0, vector<T> vec_1) {
	int a = 0;
	int b;
	int n;
	int k;

	cout << "Binary trees what was made by you: bypass Root left right\n" << endl;

	for (int i = 0; i < vec_0.size(); ++i) {
        cout << a <<".\n" << "	" << vec_0[i]->Rlr_print() << "\n";
        ++a;
	}

	a = 0;
	cout << "\n";
	cout << "Enter the number of binary tree, that you want to work\n";
	cin >> b; 
	cout << "\n";

	while (n != 0) {
		cout << "Chose operation:\n";
		cout << "1. Delete some data\n";
		cout << "2. Save into string\n";
		cout << "3. Tree extraction\n";
		cout << "4. Search for a subtree\n";
		cout << "0. Exit\n";
		cin >> n;
		cout << "\n";
		
		if (n == 1) {
			cout << "That your chosen tree (bypass Rlr):\n";
			cout << vec_0[b]->Rlr_print() << endl;
			cout << "\n";
			cout << "That all data in all trees:";

			for (int j = 0; j < vec_1.size(); ++j) {
				cout << a << ") " << vec_1[j] << " ||| ";
				++a;
			}

			cout << "\n";
			a = 0;
			cout << "Chose data, that you want to delete\n";
			cin >> k;
			cout << "\n";
			vec_0[b]->delete_node(vec_1[k]);

			cout << "Now binary tree looks like that (bypass Rlr):\n";
			cout << vec_0[b]->Rlr_print() << endl;
			cout << "\n";
		}

		if (n == 2) {
			int flag_0 = 1; 
			while (flag_0 != 0) {
				cout << "Choose bypass (R - root, l - left, r - right):\n";
				cout << "1. Rlr\n";
				cout << "2. Rrl\n";
				cout << "3. lRr\n";
				cout << "4. lrR\n";
				cout << "5. rRl\n";
				cout << "6. rlR\n";
				cout << "_____\n";
				cout << "0. exit\n";
				cout << "\n";
				cin >> flag_0;
				cout << "\n";

				if (flag_0 == 1) {
					cout << vec_0[b]->Rlr_print() << endl;
					cout << "\n";
				}

				if (flag_0 == 2) {
					cout << vec_0[b]->Rrl_print() << endl;
					cout << "\n";
				}

				if (flag_0 == 3) {
					cout << vec_0[b]->lRr_print() << endl;
					cout << "\n";
				}

				if (flag_0 == 4) {
					cout << vec_0[b]->lrR_print() << endl;
					cout << "\n";
				}

				if (flag_0 == 5) {
					cout << vec_0[b]->rRl_print() << endl;
					cout << "\n";
				}

				if (flag_0 == 6) {
					cout << vec_0[b]->rlR_print() << endl;
					cout << "\n";
				}
			}

			cout << "\n";
		}

		if (n == 3) {
			cout << "That your chosen tree (bypass Rlr):\n";
			cout << vec_0[b]->Rlr_print() << endl;
			cout << "\n";
			cout << "That all data in all trees:";

			for (int j = 0; j < vec_1.size(); ++j) {
				cout << a << ") " << vec_1[j] << "   ";
				++a;
			}
			a = 0;

			cout << "Chose data, that you want to extraction\n";
			cin >> k;
			cout << "\n";
			cout << "Now your new binary tree looks like that (bypass Rlr):\n";
			cout << vec_0[b]->tree_extraction(vec_1[k])->Rlr_print() << "\n" << endl;
		}

		if (n == 4) {
			int z;
			cout << "That your chosen tree (bypass Rlr):\n";
			cout << vec_0[b]->Rlr_print() << endl;
			cout << "\n";
			cout << "Binary trees what was made by you: bypass Root left right\n";

			for (int j = 0; j < vec_0.size(); ++j) {
        		cout << a <<".\n" << vec_0[j]->Rlr_print() << "\n";
        		++a;
			}
			a = 0;

			cout << "\n" <<"Enter the number of binary tree, that you want to find in chosen tree\n";
			cin >> z; 
			cout << "\n";			

			if (vec_0[b]->find_tree(vec_0[z]) == true) {
				cout << "True \n";
				cout << "\n";

			} else {
				cout << "False\n";
				cout << "\n";
			}

		}
	}
}

int main() {
	int a = 1;
	int b = 1;
	int c = 1;

	while (a != 0) {
		cout << "If you want to exit enter 0\n";
		cout << "If you want to work with integers enter 1\n";
		cout << "If you want to work with real numbers enter 2\n";
		cout << "If you want to work with complex numbers enter 3\n";
		cout << "If you want to work with strings enter 4\n";
		cout << "If you want to work with persons enter 5\n";
		cin >> a;
		cout << "\n";

		if (a == 1) {
			vector<Binar_tree<int>*> v_0;
			vector<int> v_1;
			int data;

			while (c != 0) {
				v_0.push_back(new Binar_tree<int> ());

					while (b != 0) {
						cout << "Enter integer data into the binary tree\n";
						cin >> data;
						v_0.back()->add_new_node(data);
						cout << "\n";

						if (data == v_0.back()->find_data(data)) {
							cout << "Binary tree updated successfully\n";
						}

						cout << "If you don't want to add any data, enter 0. If you want to continue add new data into the binary tree, enter any integer except 0\n";
						cin >> b;
						cout << "\n";
						v_1.push_back(data);
					}

				b = 1;
				cout << "If don't want enter any trees enter 0. If you want to continue make binary trees, enter any integer except 0\n";
				cin >> c;
				cout << "\n";
			}
			
			c = 1;
			text_menu(v_0, v_1);
			v_0.erase(v_0.begin(), v_0.end());
			v_1.erase(v_1.begin(), v_1.end());

		}

		if (a == 2) {
			vector<Binar_tree<double>*> v_0;
			vector<double> v_1;
			double data;

			while (c != 0) {
				v_0.push_back(new Binar_tree<double> ());

					while (b != 0) {
						cout << "Enter double data into the binary tree\n";
						cin >> data;
						v_0.back()->add_new_node(data);
						cout << "\n";

						if (data == v_0.back()->find_data(data)) {
							cout << "Binary tree updated successfully\n";
						}

						cout << "If you don't want to add any data, enter 0. If you want to continue add new data into the binary tree, enter any integer except 0\n";
						cin >> b;
						cout << "\n";
						v_1.push_back(data);
					}

				b = 1;
				cout << "If don't want enter any trees enter 0. If you want to continue make binary trees, enter any integer except 0\n";
				cin >> c;
				cout << "\n";			
			}
			
			c = 1;
			text_menu(v_0, v_1);
			v_0.erase(v_0.begin(), v_0.end());
			v_1.erase(v_1.begin(), v_1.end());

		}

		if (a == 3) {
			vector<Binar_tree<complex_number>*> v_0;
			vector<complex_number> v_1;
			double data_real;
			double data_comp;

			while (c != 0) {
				v_0.push_back(new Binar_tree<complex_number> ());

					while (b != 0) {
						cout << "Enter complex data into the binary tree\n";
						cout << "Enter real piece of complex number\n";
						cin >> data_real;
						cout << "\n";
						cout << "Enter complex piece of complex number\n";
						cin >> data_comp;

						complex_number data (data_real, data_comp);
						v_0.back()->add_new_node(data);
						cout << "\n";

						if (data == v_0.back()->find_data(data)) {
							cout << "Binary tree updated successfully\n";
						}

						cout << "If you don't want to add any data, enter 0. If you want to continue add new data into the binary tree, enter any integer except 0\n";
						cin >> b;
						cout << "\n";
						v_1.push_back(data);
					}

				b = 1;
				cout << "If don't want enter any trees enter 0. If you want to continue make binary trees, enter any integer except 0\n";
				cin >> c;
				cout << "\n";			
			}
			
			c = 1;
			text_menu(v_0, v_1);
			v_0.erase(v_0.begin(), v_0.end());
			v_1.erase(v_1.begin(), v_1.end());
		}

		if (a == 4) {
			vector<Binar_tree<line_string>*> v_0;
			vector<line_string> v_1;
			string data_ls;

			while (c != 0) {
				v_0.push_back(new Binar_tree<line_string> ());

					while (b != 0) {
						cout << "Enter string data into the binary tree\n";
						cin >> data_ls;
						line_string data(data_ls);
						v_0.back()->add_new_node(data);
						cout << "\n";

						if (data == v_0.back()->find_data(data)) {
							cout << "Binary tree updated successfully\n";
						}

						cout << "If you don't want to add any data, enter 0. If you want to continue add new data into the binary tree, enter any integer except 0\n";
						cin >> b;
						cout << "\n";
						v_1.push_back(data);
					}

				b = 1;
				cout << "If don't want enter any trees enter 0. If you want to continue make binary trees, enter any integer except 0\n";
				cin >> c;
				cout << "\n";			
			}
			
			c = 1;
			text_menu(v_0, v_1);
			v_0.erase(v_0.begin(), v_0.end());
			v_1.erase(v_1.begin(), v_1.end());

		}

		if (a == 5) {
			vector<Binar_tree<Person>*> v_0;
			vector<Person> v_1;
			int ser;
			int num;
			string s0;
			string s1;
			string s2;
			string s3;

			while (c != 0) {
				v_0.push_back(new Binar_tree<Person> ());

					while (b != 0) {
						cout << "Enter personal data into the binary tree\n";

						cout << "Enter series: ";
						cin >> ser; cout << "\n" << endl;
						
						cout << "Enter number: ";
						cin >> num; cout << "\n" << endl;
						
						cout << "Enter FirstName: ";
						cin >> s0; cout << "\n" << endl;
						
						cout << "Enter MiddleName: ";
						cin >> s1; cout << "\n" << endl;
						
						cout << "Enter LastName: ";
						cin >> s2; cout << "\n" << endl;
						
						cout << "Enter BirthDate: ";
						cin >> s3; cout << "\n" << endl;

						Person data (ser, num, s0, s1, s2, s3);
						v_0.back()->add_new_node(data);
						cout << "\n";

						if (data == v_0.back()->find_data(data)) {
							cout << "Binary tree updated successfully\n";
						}

						cout << "If you don't want to add any data, enter 0. If you want to continue add new data into the binary tree, enter any integer except 0\n";
						cin >> b;
						cout << "\n";
						v_1.push_back(data);
					}

				b = 1;
				cout << "If don't want enter any trees enter 0. If you want to continue make binary trees, enter any integer except 0\n";
				cin >> c;
				cout << "\n";			
			}
			
			c = 1;
			text_menu(v_0, v_1);
			v_0.erase(v_0.begin(), v_0.end());
			v_1.erase(v_1.begin(), v_1.end());
		}
	} 

	return 0;
}
