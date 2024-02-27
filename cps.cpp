#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <vector>
#include <experimental/filesystem>  // Use experimental version
#include <queue>
#include <algorithm>

namespace fs = std::experimental::filesystem;

const int MAX_FILES = 5;
const int MAX_FILE_SIZE_MB = 5;

std::string getCurrentDateTime() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&now_c), "%Y%m%d_%H%M%S");
    return ss.str();
}

void createNewFile(std::ofstream& file, std::string& currentFileName, int& fileCounter, std::queue<std::string>& fileQueue) {
    if (file.is_open()) {
        file.close();
    }

    if (fileCounter >= MAX_FILES) {
        // Delete the oldest file
        if (!fileQueue.empty()) {
            fs::remove(fileQueue.front());
            fileQueue.pop();
        }
    }

    // Create a new file on the desktop
    fs::path desktopPath = fs::path(getenv("HOME")) / "Desktop";
    currentFileName = desktopPath.string() + "/file_" + getCurrentDateTime();
    fileQueue.push(currentFileName + ".txt");
    file.open(currentFileName + ".txt");
    fileCounter++;
}

int main() {
    std::vector<char> data(1024 * 1024, 'A');  // 1 MB of data

    std::ofstream outputFile;
    std::string currentFileName = "";
    int fileCounter = 0;
    std::queue<std::string> fileQueue;

    while (true) {
        if (!outputFile.is_open() || outputFile.tellp() >= MAX_FILE_SIZE_MB * 1024 * 1024) {
            // If the file is not open or its size exceeds the limit, create a new file
            createNewFile(outputFile, currentFileName, fileCounter, fileQueue);
        }

        // Write data to the current file
        outputFile.write(data.data(), data.size());

        // Optionally, add a delay to simulate the passage of time
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}


#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <vector>
#include <filesystem>
#include <queue>
#include <algorithm>

namespace fs = std::filesystem;

const int MAX_FILES = 5;
const int MAX_FILE_SIZE_MB = 5;

std::string getCurrentDateTime() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&now_c), "%Y%m%d_%H%M%S");
    return ss.str();
}

void createNewFile(std::ofstream& file, std::string& currentFileName, int& fileCounter, std::queue<std::string>& fileQueue) {
    if (file.is_open()) {
        file.close();
    }

    if (fileCounter >= MAX_FILES) {
        // Delete the oldest file
        if (!fileQueue.empty()) {
            fs::remove(fileQueue.front());
            fileQueue.pop();
        }
    }

    // Create a new file on the desktop
    fs::path desktopPath = fs::path(getenv("HOME")) / "Desktop";
    currentFileName = desktopPath.string() + "/file_" + getCurrentDateTime();
    fileQueue.push(currentFileName + ".txt");
    file.open(currentFileName + ".txt");
    fileCounter++;
}

int main() {
    std::vector<char> data(1024 * 1024, 'A');  // 1 MB of data

    std::ofstream outputFile;
    std::string currentFileName = "";
    int fileCounter = 0;
    std::queue<std::string> fileQueue;

    while (true) {
        if (!outputFile.is_open() || outputFile.tellp() >= MAX_FILE_SIZE_MB * 1024 * 1024) {
            // If the file is not open or its size exceeds the limit, create a new file
            createNewFile(outputFile, currentFileName, fileCounter, fileQueue);
        }

        // Write data to the current file
        outputFile.write(data.data(), data.size());

        // Optionally, add a delay to simulate the passage of time
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <vector>
#include <filesystem>
#include <queue>
#include <algorithm>

namespace fs = std::filesystem;

const int MAX_FILES = 5;
const int MAX_FILE_SIZE_MB = 5;

std::string getCurrentDateTime() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&now_c), "%Y%m%d_%H%M%S");
    return ss.str();
}

void createNewFile(std::ofstream& file, std::string& currentFileName, int& fileCounter, std::queue<std::string>& fileQueue) {
    if (file.is_open()) {
        file.close();
    }

    if (fileCounter >= MAX_FILES) {
        // Delete the oldest file
        if (!fileQueue.empty()) {
            fs::remove(fileQueue.front());
            fileQueue.pop();
        }
    }

    // Create a new file on the desktop
    fs::path desktopPath = fs::path(getenv("USERPROFILE")) / "Desktop";
    currentFileName = desktopPath.string() + "\\file_" + getCurrentDateTime();
    fileQueue.push(currentFileName + ".txt");
    file.open(currentFileName + ".txt");
    fileCounter++;
}

int main() {
    std::vector<char> data(1024 * 1024, 'A');  // 1 MB of data

    std::ofstream outputFile;
    std::string currentFileName = "";
    int fileCounter = 0;
    std::queue<std::string> fileQueue;

    while (true) {
        if (!outputFile.is_open() || outputFile.tellp() >= MAX_FILE_SIZE_MB * 1024 * 1024) {
            // If the file is not open or its size exceeds the limit, create a new file
            createNewFile(outputFile, currentFileName, fileCounter, fileQueue);
        }

        // Write data to the current file
        outputFile.write(data.data(), data.size());

        // Optionally, add a delay to simulate the passage of time
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
