#include <iostream>
#include <vector>
using namespace std;

    // Fungsi rekursif untuk mencari indeks elemen maksimum di subarray [start, n-1]
    int findMaxIndex(vector<pair<string, double>>& episodes, int currentStart, int end) {
        // Basis rekursi: jika hanya ada satu elemen
        if (currentStart == end - 1) {
            return currentStart;
        }

        // Cari indeks maksimum di subarray [currentStart+1, end-1]
        int maxIdx = findMaxIndex(episodes, currentStart + 1, end);

        // Bandingkan dan kembalikan indeks elemen yang lebih besar
        return (episodes[currentStart].second > episodes[maxIdx].second) ? currentStart : maxIdx;
    }

// Fungsi rekursif untuk Selection Sort tanpa iterasi
void selectionSortRecursive(vector<pair<string, double>>& episodes, int start, int n) {
    // Basis rekursi: jika hanya ada satu elemen atau tidak ada elemen yang tersisa
    if (start >= n - 1) {
        return;
    }

    // Cari indeks elemen maksimum di subarray [start, n-1] menggunakan rekursi
    int maxIdx = findMaxIndex(episodes, start, n);

    // Tukar elemen maksimum dengan elemen pertama dari subarray yang belum diurutkan
    swap(episodes[start], episodes[maxIdx]);

    // Panggil rekursi untuk subarray berikutnya
    selectionSortRecursive(episodes, start + 1, n);
}

// Fungsi untuk menampilkan daftar episode podcast
void displayEpisodes(const vector<pair<string, double>>& episodes) {
    cout << "\nEpisode Podcast Terurut Berdasarkan Rating:\n";
    for (const auto& episode : episodes) {
        cout << "Judul: " << episode.first << ", Rating: " << episode.second << endl;
    }
}

int main() {
    // contoh input data = 100
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

    // Mengurutkan episode podcast menggunakan Selection Sort Rekursif
    selectionSortRecursive(episodes, 0, episodes.size());
    displayEpisodes(episodes);

    return 0;
}
