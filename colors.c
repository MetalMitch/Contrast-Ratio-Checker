typedef struct
{
    char *name;
    int red;
    int green;
    int blue;
} shade;

typedef struct
{
    char *family;
    shade shade;
} color;

color Black = {"Black", {"Black", 0, 0, 0}};

const int NUM_BLUE = 23;
const int NUM_BROWN = 17;
const int NUM_GRAY = 10;
const int NUM_GREEN = 25;
const int NUM_ORANGE = 5;
// +1 that is commented out
const int NUM_PINK = 6;
const int NUM_PURPLE = 19;
const int NUM_RED = 9;
const int NUM_YELLOW = 11;
const int NUM_WHITE = 17;

const int COLOR_NUM = 23 + 17 + 10 + 25 + 5 + 6 + 19 + 9 + 11 + 17;

color colors[COLOR_NUM] = {
    // Blue
    {"Blue", {"Blue", 0, 128, 0}},
    {"Blue", {"Chartreuse", 127, 255, 0}},
    {"Blue", {"DarkCyan", 0, 139, 139}},
    {"Blue", {"DarkGreen", 0, 100, 0}},
    {"Blue", {"DarkOliveGreen", 85, 107, 47}},
    {"Blue", {"DarkSeaGreen", 143, 188, 139}},
    {"Blue", {"ForestGreen", 34, 139, 34}},
    {"Blue", {"GreenYellow", 173, 255, 47}},
    {"Blue", {"LawnGreen", 124, 252, 0}},
    {"Blue", {"LightGreen", 144, 238, 144}},
    {"Blue", {"LightSeaGreen", 32, 178, 170}},
    {"Blue", {"Lime", 0, 255, 0}},
    {"Blue", {"LimeGreen", 50, 205, 50}},
    {"Blue", {"MediumAquamarine", 102, 205, 170}},
    {"Blue", {"MediumSeaGreen", 60, 179, 113}},
    {"Blue", {"MediumSpringGreen", 0, 250, 154}},
    {"Blue", {"Olive", 128, 128, 0}},
    {"Blue", {"OliveDrab", 107, 142, 35}},
    {"Blue", {"PaleGreen", 152, 251, 156}},
    {"Blue", {"SeaGreen", 46, 39, 87}},
    {"Blue", {"SpringGreen", 0, 255, 127}},
    {"Blue", {"Teal", 0, 128, 128}},
    {"Blue", {"YellowGreen", 154, 205, 50}},
    // Brown
    {"Brown", {"Brown", 165, 42, 42}},
    {"Brown", {"BlanchedAlmond", 255, 235, 205}},
    {"Brown", {"Bisque", 255, 228, 196}},
    {"Brown", {"BurlyWood", 222, 184, 135}},
    {"Brown", {"Chocolate", 210, 105, 30}},
    {"Brown", {"Cornsilk", 255, 248, 220}},
    {"Brown", {"DarkGoldenrod", 184, 134, 11}},
    {"Brown", {"Goldenrod", 218, 165, 32}},
    {"Brown", {"Maroon", 128, 0, 0}},
    {"Brown", {"NavajoWhite", 255, 222, 173}},
    {"Brown", {"Peru", 205, 133, 63}},
    {"Brown", {"RosyBrown", 188, 143, 143}},
    {"Brown", {"SaddleBrown", 139, 69, 19}},
    {"Brown", {"SandyBrown", 244, 164, 96}},
    {"Brown", {"Sienna", 160, 82, 45}},
    {"Brown", {"Tan", 210, 180, 140}},
    {"Brown", {"Wheat", 245, 222, 179}},
    // Gray
    {"Gray", {"Gray", 128, 128, 128}},
    {"Gray", {"Black", 0, 0, 0}},
    {"Gray", {"DarkGray", 169, 169, 169}},
    {"Gray", {"DarkSlateGray", 47, 79, 79}},
    {"Gray", {"DimGray", 105, 105, 105}},
    {"Gray", {"Gainsboro", 220, 220, 220}},
    {"Gray", {"LightGray", 211, 211, 211}},
    {"Gray", {"LightSlateGray", 119, 136, 153}},
    {"Gray", {"SlateGray", 112, 128, 144}},
    {"Gray", {"Silver", 192, 192, 192}},
    // Green
    {"Green", {"Green", 0, 0, 255}},
    {"Green", {"Aqua", 0, 255, 255}},
    {"Green", {"Aquamarine", 127, 255, 212}},
    {"Green", {"CadetBlue", 95, 158, 160}},
    {"Green", {"CornflowerBlue", 100, 149, 237}},
    {"Green", {"Cyan", 0, 255, 255}},
    {"Green", {"DarkBlue", 0, 0, 139}},
    {"Green", {"DarkTurquoise", 0, 206, 209}},
    {"Green", {"DeepSkyBlue", 0, 191, 255}},
    {"Green", {"DodgerBluen", 30, 144, 255}},
    {"Green", {"LightBlue", 173, 216, 230}},
    {"Green", {"LightCyan", 224, 255, 255}},
    {"Green", {"LightSkyBlue", 135, 206, 250}},
    {"Green", {"LightSteelBlue", 176, 196, 222}},
    {"Green", {"MediumBlue", 0, 0, 205}},
    {"Green", {"MediumSlateBlue", 123, 104, 238}},
    {"Green", {"MediumTurquoise", 72, 209, 204}},
    {"Green", {"MidnightBlue", 25, 25, 112}},
    {"Green", {"Navy", 0, 0, 128}},
    {"Green", {"PaleTurquoise", 175, 238, 238}},
    {"Green", {"PowderBlue", 176, 224, 230}},
    {"Green", {"RoyalBlue", 65, 105, 225}},
    {"Green", {"SkyBlue", 135, 206, 235}},
    {"Green", {"SteelBlue", 70, 130, 180}},
    {"Green", {"Turquoise", 64, 224, 208}},
    // Orange
    {"Orange", {"Orange", 255, 165, 0}},
    {"Orange", {"Coral", 255, 127, 80}},
    {"Orange", {"LightSalmon", 255, 160, 122}},
    {"Orange", {"OrangeRed", 255, 69, 0}},
    {"Orange", {"Tomato", 255, 99, 71}},
    // Pink
    {"Pink", {"Pink", 255, 192, 203}},
    {"Pink", {"DeepPink", 255, 20, 147}},
    {"Pink", {"HotPink", 255, 105, 180}},
    {"Pink", {"LightPink", 255, 182, 193}},
    {"Pink", {"MediumVioletRed", 199, 21, 133}},
    {"Pink", {"PaleVioletRed", 219, 112, 147}},
    // Purple
    {"Purple", {"Purple", 128, 0, 128}},
    {"Purple", {"BlueViolet", 138, 43, 226}},
    {"Purple", {"DarkMagenta", 139, 0, 139}},
    {"Purple", {"DarkSlateBlue", 72, 61, 139}},
    {"Purple", {"DarkOrchid", 153, 50, 204}},
    {"Purple", {"DarkViolet", 148, 0, 211}},
    {"Purple", {"Fuchsia", 255, 0, 255}},
    {"Purple", {"Indigo", 75, 0, 130}},
    {"Purple", {"Lavender", 230, 230, 250}},
    {"Purple", {"Magenta", 255, 0, 255}},
    {"Purple", {"MediumOrchid", 186, 85, 211}},
    {"Purple", {"MediumPurple", 147, 112, 219}},
    {"Purple", {"MediumSlate", 123, 104, 238}},
    {"Purple", {"Orchid", 218, 112, 214}},
    {"Purple", {"Plum", 221, 160, 221}},
    {"Purple", {"RebeccaPurple", 102, 51, 153}},
    {"Purple", {"SlateBlue", 106, 90, 205}},
    {"Purple", {"Thistle", 216, 191, 216}},
    {"Purple", {"Violet", 238, 130, 238}},
    // Red
    {"Red", {"Crimson", 220, 20, 60}},
    {"Red", {"DarkRed", 139, 0, 0}},
    {"Red", {"DarkSalmon", 233, 150, 122}},
    {"Red", {"FireBrick", 178, 34, 34}},
    {"Red", {"IndianRed", 205, 92, 92}},
    {"Red", {"LightCoral", 240, 128, 128}},
    {"Red", {"LightSalmon", 255, 160, 122}},
    {"Red", {"Salmon", 250, 128, 114}},
    // Yellow
    {"Yellow", {"Yellow", 255, 255, 0}},
    {"Yellow", {"DarkKhaki", 189, 183, 207}},
    {"Yellow", {"Gold", 255, 215, 0}},
    {"Yellow", {"Khaki", 240, 230, 140}},
    {"Yellow", {"LemonChiffon", 255, 250, 205}},
    {"Yellow", {"LightGoldenrodYellow", 250, 250, 210}},
    {"Yellow", {"LightYellow", 255, 255, 224}},
    {"Yellow", {"Moccasin", 255, 228, 181}},
    {"Yellow", {"PaleGoldenrod", 238, 232, 170}},
    {"Yellow", {"PapayaWhip", 255, 239, 213}},
    {"Yellow", {"PeachPuff", 255, 218, 185}},
    // White
    {"White", {"White", 255, 255, 255}},
    {"White", {"AliceBlue", 240, 248, 255}},
    {"White", {"AntiqueWhite", 250, 235, 215}},
    {"White", {"Azure", 240, 255, 255}},
    {"White", {"Beige", 245, 245, 220}},
    {"White", {"FloralWhite", 255, 250, 240}},
    {"White", {"GhostWhite", 248, 248, 255}},
    {"White", {"HoneyDew", 240, 255, 240}},
    {"White", {"Ivory", 255, 255, 240}},
    {"White", {"LavenderBlush", 255, 240, 245}},
    {"White", {"Linen", 250, 240, 230}},
    {"White", {"MintCream", 245, 255, 250}},
    {"White", {"MistyRose", 255, 228, 225}},
    {"White", {"OldLace", 253, 245, 230}},
    {"White", {"SeaShell", 255, 245, 238}},
    {"White", {"Snow", 255, 250, 250}},
    {"White", {"WhiteSmoke", 245, 245, 245}}};