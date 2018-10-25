using namespace std;

void getstring(void)
{
    ifstream pass_file("pass.txt");
    string line;
    string identifier;
    cout << "get what?" << endl;
    cin >> identifier;
    while(getline(pass_file,line)){
        if(!(line.find(identifier)))
            cout << line << endl;
    }
}
