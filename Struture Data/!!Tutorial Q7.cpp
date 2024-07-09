#include <iostream>
#include <string>

using namespace std;

struct Speaker {
    string name;
    string telephoneNumber;
    string speakingTopic;
    double feeRequired;
};

void displayMenu() {
    cout << "1. Add a new speaker" << endl;
    cout << "2. Update speaker information" << endl;
    cout << "3. Display all speakers" << endl;
    cout << "4. Exit" << endl;
}

void addSpeaker(Speaker* speakers, int& count) {
    if (count > 10) {
        Speaker* newSpeakers = new Speaker[count + 1];
        for (int i = 0; i < count; i++) {
            newSpeakers[i] = speakers[i];
        }
        delete[] speakers;
        speakers = newSpeakers;
    }

    Speaker newSpeaker;

    cout << "Enter speaker name: ";
    getline(cin, newSpeaker.name);

    cout << "Enter telephone number: ";
    getline(cin, newSpeaker.telephoneNumber);

    cout << "Enter speaking topic: ";
    getline(cin, newSpeaker.speakingTopic);

    cout << "Enter fee required: $";
    cin >> newSpeaker.feeRequired;

    cin.ignore(); // Ignore the newline character

    speakers[count] = newSpeaker;
    count++;

    cout << "Speaker added successfully." << endl;
}

void updateSpeaker(Speaker* speakers, int count) {
    if (count == 0) {
        cout << "No speakers found." << endl;
        return;
    }

    string speakerName;
    cout << "Enter speaker name: ";
    getline(cin, speakerName);

    for (int i = 0; i < count; i++) {
        if (speakers[i].name == speakerName) {
            cout << "Enter new telephone number: ";
            getline(cin, speakers[i].telephoneNumber);

            cout << "Enter new speaking topic: ";
            getline(cin, speakers[i].speakingTopic);

            cout << "Enter new fee required: $";
            cin >> speakers[i].feeRequired;

            cin.ignore(); // Ignore the newline character

            cout << "Speaker information updated successfully." << endl;
            return;
        }
    }

    cout << "Speaker not found." << endl;
}

void displaySpeakers(Speaker* speakers, int count) {
    if (count == 0) {
        cout << "No speakers found." << endl;
        return;
    }

    cout << "Speakers:" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Speaker " << i + 1 << ":" << endl;
        cout << "Name: " << speakers[i].name << endl;
        cout << "Telephone Number: " << speakers[i].telephoneNumber << endl;
        cout << "Speaking Topic: " << speakers[i].speakingTopic << endl;
        cout << "Fee Required: $" << speakers[i].feeRequired << endl;
        cout << endl;
    }
}

int main() {
    Speaker *speakers;
    speakers = new Speaker[10];
    int count = 0;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character

        switch (choice) {
            case 1:
                addSpeaker(speakers, count);
                break;
            case 2:
                updateSpeaker(speakers, count);
                break;
            case 3:
                displaySpeakers(speakers, count);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}