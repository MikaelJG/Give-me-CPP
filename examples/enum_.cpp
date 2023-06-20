
enum class Month {
    January,
    February,
    March,
    // all months
};

const std::vector<std::string> monthNames = {
    "January",
    "February",
    "March",
    // all months
};

int main() {
    Month currentMonth = Month::May;
    int monthIndex = static_cast<int>(currentMonth);

    std::cout << "Current month: " << monthNames[monthIndex] << std::endl;

    return 0;
}

