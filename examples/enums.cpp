
enum class Day {
    Monday,
    Tuesday,
    Wednesday,
};

Day today = Day::Tuesday;

if (today == Day::Saturday || today == Day::Wednesday) {
} else {}

