
enum class Month {
    January,
    February,
    March
};

const std::vector<std::string> monthNames = {
    "January",
    "February",
    "March"
};

    Month currentMonth = Month::May;
    int monthIndex = static_cast<int>(currentMonth);
    std::cout << "Current month: " << monthNames[monthIndex] << std::endl;

