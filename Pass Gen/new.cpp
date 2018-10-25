using namespace std;

std::string randomPass(int length)
{
    char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                   'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                   's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                   'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                    'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                    '0','1', '2', '3', '4', '5', '6', '7', '8', '9'};
    std::string pass;
    srand(time(NULL));
    for(int i = 0; i < length; i++)
        pass = pass + letters[rand() % 62];
    return pass;
}

void newstring(void)
{
    ofstream pass_file("pass.txt", ios_base::app);
    string identifier;
    int length;
    cout << "Insert new identifier and length of pass" << endl;
    cout << "[Name legth]" << endl;
    cin >> identifier >> length;
    transform(identifier.begin(), identifier.end(), identifier.begin(), ::tolower);
    string pass;
    pass = randomPass(length);
    pass_file << identifier << " " << pass << endl;
    pass_file.close();
}
