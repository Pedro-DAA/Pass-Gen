using namespace std;

void delStr(void)
{
    string deleteLine;
    string line;

    ifstream pass_file("pass.txt");
    ofstream temp_file("temp.txt");
    cout << "What do you want to delete" << endl;
    cin >> deleteLine;
    int delLength = int(deleteLine.length());
    while(getline(pass_file, line))
    {
        string conLine = line.substr(0, delLength);
        if (conLine != deleteLine)
            temp_file << line << endl;
    }
    pass_file.close();
    temp_file.close();
    remove("pass.txt");
    rename("temp.txt", "pass.txt");
}
