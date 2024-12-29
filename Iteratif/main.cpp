#include <iostream>
#include <vector>
using namespace std;

// Fungsi Selection Sort Iteratif untuk mengurutkan data berdasarkan rating
void selectionSortIterative(vector<pair<string, double>>& episodes) {
    int n = episodes.size();
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;

        // Cari elemen maksimum di sisa array
        for (int j = i + 1; j < n; j++) {
            if (episodes[j].second > episodes[maxIdx].second) {
                maxIdx = j;
            }
        }

        // Tukar elemen maksimum dengan elemen pertama di subarray yang belum diurutkan
        if (maxIdx != i) {
            swap(episodes[i], episodes[maxIdx]);
        }
    }
}

// Fungsi untuk menampilkan daftar episode podcast
void displayEpisodes(const vector<pair<string, double>>& episodes) {
    cout << "\nEpisode Podcast Terurut Berdasarkan Rating:\n";
    for (const auto& episode : episodes) {
        cout << "Judul: " << episode.first << ", Rating: " << episode.second << endl;
    }
}

int main() {
    vector<pair<string, double>> episodes = {
        {"Episode 1", 4.5}, {"Episode 2", 4.7}, {"Episode 3", 4.6},
        {"Episode 4", 4.9}, {"Episode 5", 4.3}, {"Episode 6", 4.8},
        {"Episode 7", 4.2}, {"Episode 8", 4.1}, {"Episode 9", 4.0},
        {"Episode 10", 3.9}, {"Episode 11", 3.8}, {"Episode 12", 3.7},
        {"Episode 13", 3.6}, {"Episode 14", 3.5}, {"Episode 15", 3.4},
        {"Episode 16", 3.3}, {"Episode 17", 3.2}, {"Episode 18", 3.1},
        {"Episode 19", 3.0}, {"Episode 20", 2.9}, {"Episode 21", 2.8},
        {"Episode 22", 2.7}, {"Episode 23", 2.6}, {"Episode 24", 2.5},
        {"Episode 25", 2.4}, {"Episode 26", 2.3}, {"Episode 27", 2.2},
        {"Episode 28", 2.1}, {"Episode 29", 2.0}, {"Episode 30", 1.9},
        {"Episode 31", 1.8}, {"Episode 32", 1.7}, {"Episode 33", 1.6},
        {"Episode 34", 1.5}, {"Episode 35", 1.4}, {"Episode 36", 1.3},
        {"Episode 37", 1.2}, {"Episode 38", 1.1}, {"Episode 39", 1.0},
        {"Episode 40", 4.5}, {"Episode 41", 4.7}, {"Episode 42", 4.6},
        {"Episode 43", 4.9}, {"Episode 44", 4.3}, {"Episode 45", 4.8},
        {"Episode 46", 4.2}, {"Episode 47", 4.1}, {"Episode 48", 4.0},
        {"Episode 49", 3.9}, {"Episode 50", 3.8}, {"Episode 51", 3.7},
        {"Episode 52", 3.6}, {"Episode 53", 3.5}, {"Episode 54", 3.4},
        {"Episode 55", 3.3}, {"Episode 56", 3.2}, {"Episode 57", 3.1},
        {"Episode 58", 3.0}, {"Episode 59", 2.9}, {"Episode 60", 2.8},
        {"Episode 61", 2.7}, {"Episode 62", 2.6}, {"Episode 63", 2.5},
        {"Episode 64", 2.4}, {"Episode 65", 2.3}, {"Episode 66", 2.2},
        {"Episode 67", 2.1}, {"Episode 68", 2.0}, {"Episode 69", 1.9},
        {"Episode 70", 1.8}, {"Episode 71", 1.7}, {"Episode 72", 1.6},
        {"Episode 73", 1.5}, {"Episode 74", 1.4}, {"Episode 75", 1.3},
        {"Episode 76", 1.2}, {"Episode 77", 1.1}, {"Episode 78", 1.0},
        {"Episode 79", 4.5}, {"Episode 80", 4.7}, {"Episode 81", 4.6},
        {"Episode 82", 4.9}, {"Episode 83", 4.3}, {"Episode 84", 4.8},
        {"Episode 85", 4.2}, {"Episode 86", 4.1}, {"Episode 87", 4.0},
        {"Episode 88", 3.9}, {"Episode 89", 3.8}, {"Episode 90", 3.7},
        {"Episode 91", 3.6}, {"Episode 92", 3.5}, {"Episode 93", 3.4},
        {"Episode 94", 3.3}, {"Episode 95", 3.2}, {"Episode 96", 3.1},
        {"Episode 97", 3.0}, {"Episode 98", 2.9}, {"Episode 99", 2.8},
        {"Episode 100", 2.7}
    };

    cout << "\nData Episode Podcast Sebelum Diurutkan:\n";
    for (const auto& episode : episodes) {
        cout << "Judul: " << episode.first << ", Rating: " << episode.second << endl;
    }

    // Mengurutkan episode podcast menggunakan Selection Sort
    selectionSortIterative(episodes);
    displayEpisodes(episodes);

    return 0;
}
