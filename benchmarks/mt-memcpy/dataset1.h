
#define DATA_SIZE 6000 

int input_data[DATA_SIZE] = 
{
   41, 454, 833, 335, 564,   1, 187, 989, 749, 365, 350, 572, 132,  64, 949, 153, 584, 216, 805, 140, 
  621, 210,   6, 572, 931, 339, 890, 593, 392, 898, 694, 228, 961,  12, 110, 883, 116, 750, 296, 646, 
  426, 500, 314, 436, 659, 701, 774, 812, 319, 981, 678, 150, 875, 696, 376, 564, 474, 272, 938, 258, 
  539, 647, 569, 509, 203,  88, 280, 703, 759, 669, 606, 375, 511, 551, 657, 936, 195, 592,  81, 569, 
  267, 952, 229, 800, 337, 584, 944, 643, 902, 368, 241, 489, 913, 328, 826, 313, 933, 592, 985, 388, 
  195, 543, 960, 649, 566, 979, 350, 997, 649, 814, 657,  79, 181, 208, 111, 998, 859, 629,  65, 847, 
  288, 704, 349, 997, 141, 253, 905, 715, 886, 430, 264, 415, 576, 538, 979, 700, 761,   4, 241, 494, 
  478, 100, 499, 864, 403, 693, 222, 416, 444, 296, 721, 285, 676, 620, 317,  78, 224, 351, 937, 540, 
  288, 646, 119, 169, 615, 527, 606, 289, 389, 796, 351, 801, 455, 720, 278, 758, 367, 745, 358,  92, 
  584, 989,  62, 271, 985, 853, 403, 788, 346, 531, 517, 222, 559, 461, 908, 241, 775, 358, 255, 332, 
  778, 684, 598, 740, 143, 446,  33, 311, 125, 743, 941, 557, 933, 479, 799, 557, 553, 925, 431, 796, 
  648, 357, 952, 891, 287, 666,  19, 514,  49, 557,  86, 870,  95, 853, 441, 440, 587,  61, 614, 678, 
  382, 396, 280,   9, 808,  17, 971, 170, 819, 291, 344, 380, 450, 536, 512, 185, 965, 917, 347, 539, 
  808, 983, 882, 887, 537,  54, 946, 612, 701, 951, 356, 479, 567, 151, 891,   7,  22, 641, 568, 335, 
  665, 730, 423,  95, 434, 728, 158, 280,   2, 395,  84, 688, 247, 911,  49, 476, 435, 815, 792, 729, 
  869, 265, 486, 127, 414, 236, 369, 214, 548, 180, 518,   6, 888, 503, 682, 596, 284, 173, 264, 643, 
  499, 346, 290, 599, 897,  68, 215, 849, 731, 658, 688, 619, 251, 121, 786, 131, 555, 828, 302, 667, 
  528, 433, 544, 487, 322, 753, 947, 125, 287, 626, 824,  14, 304,  10, 788, 403, 733, 106, 959, 703, 
  366, 818, 722, 964, 294, 406, 975, 874, 653, 856, 748,  86,  91,  60, 378, 660, 105, 667, 102, 153, 
  381, 121, 651,  98, 825, 412, 840, 236, 356,  12, 148, 423,  54, 965, 140, 216, 955, 621, 343, 361, 
  533, 921, 757, 715, 521, 647, 837, 299, 592, 886,  13, 682, 173,  36,  63, 493, 121, 551, 133, 537, 
  758, 969, 372, 643, 951, 434,  39, 415, 129, 303, 110, 438, 847, 860, 437, 203, 255, 478, 269, 988, 
  409, 675, 628, 719, 399, 990, 549, 338, 753, 450, 564, 633, 171, 155,  19, 646, 727, 452, 501, 427, 
  777, 509,  43, 988, 753, 426,  81,  12, 202, 483, 853, 142, 153, 339, 760, 390, 357,  50, 943, 171, 
  922, 601, 328, 105, 496, 968, 442, 121, 516, 879, 641,  81, 276, 870, 786, 600, 113, 603, 842, 871, 
  907, 887, 275, 610, 237, 404,  32, 234, 784, 745, 565, 526, 357, 275, 803, 441, 819, 226, 751, 752, 
  280, 943,  85, 726, 458, 709, 454, 201, 710,  54, 459, 758,  41,  53, 253, 397, 377,  41, 508, 141, 
  700, 416, 860, 747, 480, 219, 741, 478, 499, 770, 709, 180,  49, 482, 371, 691, 873, 725, 945, 173, 
  992, 186, 526, 914, 721,   1, 435, 963, 232, 247, 497, 464, 697, 362,  30, 521, 348, 233, 250, 120, 
  350,  40, 250, 779, 573, 195, 784, 161, 749, 743, 502, 439, 823, 355, 826, 403, 170, 141, 160, 633, 
  674, 289,  32, 782, 202, 320, 143, 636, 853, 118,  90, 852, 394,  70, 107, 816, 855, 388, 106, 954, 
  157,  36,   6,  16, 765, 698, 204, 695, 194, 677, 574, 598, 218, 883, 526, 824, 177, 746, 239, 462, 
  698, 511, 757, 534, 706, 440,  49, 428,  84, 732, 799, 726, 893, 702, 512, 547, 373,  86, 492, 798, 
   14, 215, 621,  21,  83, 651, 103,  59, 794, 429, 921, 657, 643,  96, 880, 973, 834, 659, 239, 966, 
  462, 524, 114,  62, 561, 625, 529, 303,  10, 714, 997, 409, 904,  55, 387, 728, 407, 305, 105, 436, 
  559, 901, 936, 592, 512, 691, 409, 796, 302, 497, 202, 177, 427, 940, 613, 995, 359, 480, 521, 158, 
  684, 822,  22, 611, 185, 680, 312,  14, 107, 111, 274, 797, 387, 185, 242,   0, 486, 718, 105,  96, 
  698, 749, 899, 739, 770, 814, 644, 435,  80, 326, 161,  37, 407,  33, 946, 605,  30, 935, 768,  27, 
  870,  88, 113, 441, 148, 339,  62, 344, 147, 554, 838, 365, 845, 954, 432, 639, 141, 396, 211, 991, 
  817, 249, 821, 338, 562, 832, 364, 974, 615, 393, 495, 266, 812, 470, 916, 348, 159, 336, 430, 419, 
  803, 249, 180, 215, 544, 542, 840, 903, 458, 636, 786, 729, 872, 581, 795, 820, 806, 671, 758, 979, 
  104, 418, 401, 670, 254, 920, 984, 568, 136, 745, 729, 662, 584, 139, 794, 385, 414, 927, 528, 173, 
  707, 457, 554, 316, 378, 183, 766, 477, 977, 196, 236, 399, 947, 416, 229, 805, 165, 996, 505, 270, 
  105, 735, 704, 696, 796, 825, 140, 528, 303,  50, 795, 623, 635, 537, 560,  87, 119, 294,   8, 867, 
  532, 110, 814, 398,  37, 781, 584, 646, 739, 375, 619, 943, 767, 897, 478, 589,  57,  44, 958, 288, 
  784, 845, 985, 742, 837,  99, 307, 522,  67, 443, 824, 432, 996, 165, 749, 930, 171,  28, 826, 461, 
  621, 323, 155, 272, 826, 376,  43, 340, 694, 898,  80, 158, 236, 168, 747, 443, 744, 193, 265, 631, 
  124, 935, 731, 274, 941, 781, 425, 185, 370, 619, 320, 292, 269, 933, 542, 156, 763, 827, 752,  88, 
  915, 987,  14, 629,   1, 649, 906,  32, 995,   1, 809, 744, 560, 399, 873, 915, 972, 791, 289, 554, 
  509, 984, 558, 530, 970, 600, 405, 401, 579, 683, 293, 540, 251, 903, 849, 120, 129, 995, 452, 521, 
  716, 622,  86, 224, 678, 895, 181, 530, 240, 820, 335, 651, 793, 226, 641,  96,   1, 262, 320, 569, 
  987, 238, 646, 126, 754, 610, 958, 191, 203, 238, 142, 796, 180, 884, 299, 573, 165, 108, 761, 140, 
  974, 789, 646, 852, 559,  23, 619, 704, 422, 890, 260, 480, 565,  52, 542, 372, 492, 201, 991, 546, 
  745, 408, 207, 119, 372, 645, 932, 464, 664,  81,  34, 293, 533,  52, 478, 880, 908, 224, 203, 744, 
   33, 735, 214, 886, 365, 167, 892,   1, 781, 532, 680, 321, 705, 169, 688, 485, 947, 101, 386, 177, 
   50,  42, 101, 708, 474, 654, 399, 915, 679, 625, 330, 242, 952, 822, 471, 795, 477, 641, 725, 252, 
  713, 245, 937, 151, 529, 876, 870, 333,  77, 601, 545, 938, 907, 775, 853, 397, 143, 233, 979, 755, 
  239, 454, 105, 424, 365, 210,  98, 962,  54, 900,  98, 923, 440, 655, 764, 529, 315, 595, 336,  90, 
  697, 464, 774, 685, 726,  70, 324, 754, 282,  32, 536, 494, 622,  25, 594, 389, 890, 488,  75,  37, 
  290, 409, 496, 639, 726,  27, 449, 950, 548, 539, 135,  80, 644, 303, 838, 723, 290, 734, 767, 125, 
  162, 552, 415, 248, 491, 107, 985, 362, 116,  48, 617, 869, 859, 144, 235, 841, 282, 724, 571, 335, 
  913, 470, 560, 263, 194, 343, 242, 809, 782, 677, 985, 339, 728, 336, 344, 410, 430, 465, 613,  56, 
  759, 590, 176, 485, 309, 406, 333, 993, 354, 746, 310, 238, 699, 525,  46, 336, 487, 256, 503, 134, 
  100, 546, 393, 722, 268, 367, 314, 943,  75, 106, 345, 629, 987, 396, 600, 208, 908, 429, 384, 523, 
   92, 130, 545, 355, 277, 990, 668, 673, 351, 991, 853, 719, 863, 449, 312,  84, 100, 616, 532, 211, 
  567, 707, 836, 737, 370, 847, 989, 452, 461, 316, 912, 974, 182, 746, 268, 796, 160, 522, 771, 618, 
   22, 115, 854, 727, 644, 226,  17, 165, 779, 200, 911, 830, 855, 742, 137, 187, 983, 705, 717, 671, 
  565, 785, 719, 886, 253, 962, 785, 657, 154, 293, 196, 620, 253, 144, 447, 173, 899, 796,   5,  72, 
  325, 678, 616,  80, 309, 793, 175, 685, 159, 637, 123, 967, 838, 241, 715, 898, 550, 693, 230, 372, 
   82, 601, 627, 721, 324, 398, 927, 553, 103,  72,  17, 174, 966, 978, 159, 325, 177, 558, 593, 185, 
  372, 505, 393, 859, 599, 651, 745, 573, 377, 321, 865, 349, 591, 400, 553, 890, 440, 844, 345, 885, 
  593, 933, 290, 980, 908, 448, 544, 989, 377,  50, 456, 332, 781, 900, 110, 716, 495, 747, 896, 444, 
  806,   6, 700, 394, 548, 285, 340, 703,  29, 450, 829, 652, 630, 771, 546, 485, 613, 534, 972, 559, 
  116, 481, 313, 507, 904, 434, 971, 343, 607,  42, 794, 784, 169, 865, 896, 421, 507, 415, 916, 871, 
  431, 539, 339, 162, 147, 105, 224, 481, 112, 595, 580, 115, 834, 350, 134, 964, 948, 287, 201, 232, 
  488, 154, 396, 602, 797, 539, 478, 943, 769, 872, 574, 121, 485, 652, 339, 811, 721, 747, 451, 362, 
  821, 340, 744, 910,   0, 206, 594, 572, 277, 505, 120, 973, 680, 961, 757, 354, 555, 627, 847, 849, 
  517, 971, 379, 910, 505, 410, 904, 770, 246,  63, 243, 874, 394, 396, 430, 482, 214, 619, 244, 646, 
  524, 557, 399, 328, 172,  67, 304, 884, 620, 512, 594, 972, 535,   6, 698, 513, 159, 882, 750, 562, 
  809, 764, 454, 366,  75, 506,  93, 786, 167, 831,  16, 382, 853, 638, 494, 452, 324,  72,  78,  83, 
   52,  59, 112, 932,  10, 929, 342, 924, 730, 961, 680,  69, 287, 797, 961, 985,  92, 854, 626, 885, 
  912, 600, 616, 389, 860, 232, 744, 793, 744, 179, 478, 773, 615, 689, 508, 775, 914, 494, 810, 139, 
  288, 234, 974, 431, 129, 780, 581, 371, 548,  22, 868, 653, 981, 741, 270, 815, 623, 428, 653, 139, 
  626, 603, 990, 315, 386, 344, 323, 889, 472, 317, 164, 260, 239, 861, 189, 377, 865, 511, 231, 304, 
  356,  70, 152,  35, 825, 854, 328, 576, 390, 490, 848, 326,  38, 303, 402, 431, 616, 813, 546, 708, 
  206, 388,   2, 962, 783, 967, 890, 442, 815,  49, 831, 831, 665, 251, 410, 321,  94, 741, 246, 179, 
  422, 176, 211, 117, 675, 523,   9, 764, 374, 952, 426, 704,  64, 531,  53, 804, 758,  23, 811, 611, 
  500, 846, 437, 375, 335, 854, 328, 971, 237,  24, 415, 639, 468, 318, 684, 723, 565, 662, 305, 647, 
  449, 281, 597, 158, 136, 294, 882, 885, 383, 734, 938, 866, 268, 471, 115, 296, 908, 673,  50, 472, 
  952, 439, 366,   5, 397, 155, 257, 506, 231, 948, 667, 600,  35, 445, 990, 222, 443, 784, 213, 349, 
  389, 943,  13, 150, 621, 366,  52, 444, 612, 604, 934, 720, 953, 340, 828, 972, 462, 911, 621, 321, 
  812, 435, 522,  50, 672,  78,  57, 761, 313, 950, 352, 238,  55,  27, 972, 226, 753, 201, 416, 176, 
  879, 877, 864, 450, 572, 879, 163,  99, 721, 143,  12,  31, 643, 812, 507, 771, 968, 527, 781, 488, 
  840, 797, 242, 194, 630, 293, 810, 966, 795, 276, 435, 345, 885, 413, 599, 197, 696, 386, 643, 116, 
   93, 322, 710, 680, 785, 538, 112, 553, 581, 960,  12, 874, 923,  48, 615, 506, 652, 898, 359, 539, 
  261, 495, 233, 764, 609, 805, 686, 286, 539, 432, 118, 836, 560, 192, 739, 825,  20, 778, 317, 586, 
  976, 359, 573, 352, 386, 746, 772,  11, 663, 749, 504,   5, 212, 408, 888, 643, 907, 441, 420, 368, 
  737,  97, 516, 169,  25, 359, 219, 527, 797, 672, 716,  69, 452, 880, 692, 298, 683, 300, 459, 327, 
  815, 923, 323, 829, 612, 816, 247, 497, 116, 243, 352, 981, 281, 917, 738, 713, 290, 653, 909, 503, 
  645, 406, 625, 543, 932, 108, 220, 304, 685, 464, 373, 954, 876,  86, 646, 802, 412, 446, 955,  28, 
  664, 539, 850, 655, 783,  28, 392, 470, 707, 735, 422, 941, 523, 610, 682, 451,  37, 672, 156, 237, 
   43, 766, 767, 713, 124, 409, 549, 869, 814, 186, 251, 475, 214, 568, 212,  44, 572, 997, 898, 139, 
  956, 456, 608, 470, 651, 566, 434, 408, 906, 756, 970, 573, 640, 877, 687,  24, 642, 506, 265, 368, 
  271, 399, 972, 950, 814, 109, 824, 595, 121, 856, 465, 516, 468, 473, 631, 793, 281, 736, 416, 708, 
  315, 978, 235, 530, 626, 419, 296, 548, 502, 854,  28, 184, 668, 786, 326, 228, 578, 738, 881, 265, 
  304, 808, 415, 490,   0, 623, 199, 483, 934, 105, 212, 545, 535, 154,  40, 473, 528, 712, 835, 668, 
  349, 235, 338, 307, 230, 334, 872, 522, 374, 225, 143, 746, 996, 144, 385, 136, 848, 545, 487, 434, 
  587, 837,   8, 456, 487, 434, 729, 114, 944, 971, 688, 316, 871, 667, 156, 304, 624, 813, 269, 729, 
   47, 538, 250, 756, 491, 838, 882, 404, 213,  56, 231, 471, 326, 758, 132, 493, 644, 327, 421, 992, 
  327, 435,  57, 651, 676, 352, 519, 199, 776, 354, 235, 648, 647,   3,  95, 842, 260, 345, 713, 912, 
  198, 781, 493, 632, 943, 142,  86, 615, 222,  95, 843, 743, 337, 942, 752,  87,  53, 121,  86, 263, 
  889, 580, 269, 666, 187,  68, 731, 230, 538,  72, 759, 330, 961, 547, 606, 593,  10, 320, 560, 798, 
  122,  32, 957, 646, 288, 450, 604, 161, 128, 880, 109, 220, 175, 818, 590, 425, 413, 217, 346, 205, 
  249,  63, 635, 858, 514,  14, 799, 766, 882, 610, 939, 375, 157, 120, 886, 963, 172, 983, 974, 755, 
  922, 571, 323, 352, 783, 866, 832, 955, 100, 492, 772, 530, 751, 361, 696, 321, 650,  69, 986, 552, 
  192,  55, 798,  91,  39, 563, 654, 564, 761, 544, 892, 167, 801, 122, 277,  25, 451, 829, 967, 781, 
  361, 168,  64, 397, 928, 563, 914, 336, 536, 478, 243, 257, 264, 477, 879, 390, 640, 701, 208, 328, 
  302, 443, 295, 521, 813, 914, 573, 118, 345, 525, 964, 508, 482,  30, 606, 416, 101,  71, 121,  92, 
  435, 284, 453, 161,  20, 361,  70, 414,  23, 804, 255, 839, 276, 586, 890,  36, 427, 246, 542, 865, 
  622, 953, 699, 366, 773, 803, 296, 133, 277, 529, 104, 229,  80, 462, 632, 260, 815,  37, 851, 237, 
  732, 243, 393, 866, 760, 196, 126, 631, 168, 301, 843, 613, 189, 333, 589, 247, 936, 197, 256, 594, 
  232, 956,  75, 306, 190, 329, 424, 153, 751, 690, 757, 805, 876, 539,  48, 122, 857, 473, 770, 388, 
  638, 125, 488, 973, 176, 203, 474, 693, 461,  82, 606, 432, 923,  70,   0, 371, 632, 206, 280, 604, 
  928, 686, 300, 120, 451, 795, 703, 810, 711, 708, 620, 357, 443,  98, 789, 903, 611,  93, 231, 376, 
  530, 299, 791,   1, 732, 298, 289, 131, 726, 834, 806, 249, 172, 709, 898, 123, 456,   5, 942, 462, 
  607, 322, 801, 208, 503, 421, 741, 183, 806, 258, 633, 533, 950, 594, 948,  31,  40, 984, 353, 213, 
  195,  50, 794, 978, 700, 217, 287, 821, 267, 734, 774, 554, 650, 361, 199, 236, 263,  99, 316, 810, 
  946, 984, 940, 891, 603, 180, 834, 333, 639, 286, 522,  33, 256, 202, 418, 467, 266, 716, 918, 126, 
  786, 695, 782, 408, 529, 921, 494, 207, 301, 925, 195, 804, 391, 951, 730, 552, 912, 432, 798,  33, 
  472, 262, 826, 748, 367, 835, 115, 373, 233, 351, 850, 910, 854, 688, 551, 883, 857,  24, 314, 555, 
  822, 986, 422, 917, 175, 172, 470, 354, 830, 208, 311, 834, 206, 653, 144, 823, 106, 126, 638, 689, 
  134, 307, 623, 804, 439, 423, 913, 349, 602, 424, 996, 430, 555, 144, 481, 756, 226, 990, 325, 207, 
  851, 302, 535, 825, 134, 849, 204, 683, 695, 556, 791, 763, 169, 533, 623, 194,  86, 724, 484, 440, 
   92, 870, 471,  86, 538,  47, 303, 819, 777, 652, 702, 900, 530, 522, 459, 321, 913, 559, 963, 963, 
  685, 369, 327, 470, 164, 284, 437, 957, 148, 616,   2, 108, 106, 296, 743, 121, 304, 131, 694, 935, 
  503, 937,  40, 883,  39, 899,  70, 229, 637, 654, 843, 866, 259, 252, 531,  52, 492, 969, 693, 419, 
  278, 777, 970, 442, 546, 456, 503,  69, 955, 129, 697, 623, 842, 359, 325, 515, 223, 527,  84, 469, 
  732, 724, 319, 104, 703, 789, 980, 109, 446, 830, 892,  23, 689, 884, 100, 790, 196, 509, 343, 828, 
  637, 580, 367, 847,  48, 435, 860, 292, 696, 523, 724, 908, 191, 805, 392, 951, 510, 163, 975, 258, 
  569, 922, 723, 232, 692, 328,  49, 654,  48,  35,  88, 450, 900, 854, 485, 700, 424, 515, 759, 543, 
  441, 631,  57, 346, 637, 814, 405, 885, 632, 609, 147, 952, 446, 919, 371, 154, 995, 814, 965, 875, 
  729, 993, 734, 767, 467, 163, 690, 480, 293, 685, 687, 104, 433, 942, 363,  28, 725, 163, 738, 330, 
  370, 129, 741, 952, 444, 241, 309, 380, 279, 336, 337, 607, 503, 132, 517, 368, 882,  87, 539, 687, 
  146, 233, 336, 457, 789, 246,  78, 192, 367,  73, 856, 990, 423, 945,  82, 967, 921, 980,  87, 553, 
  534,  33, 628, 565, 342, 326, 572, 430, 563, 108, 990, 429, 517, 178, 139, 847, 928, 518, 770, 160, 
  291,  75, 224, 297, 564, 234, 704, 948, 382, 163, 596, 163, 675, 420, 231,  70, 604, 366, 722, 886, 
  746, 635, 819, 733,  59, 372, 722, 874, 256,  26, 677, 451, 440, 204, 585, 435, 474, 580, 667, 548, 
   93, 813, 333,  49, 924, 508, 208, 373, 769, 682, 877, 448, 823,  47, 452, 274, 321, 665, 599,  49, 
  866, 570, 286, 442, 690, 385, 101, 478, 215, 713, 539, 238, 659, 344, 146, 142, 454, 289, 340, 764, 
  774, 518, 540, 977, 579, 222, 726,   7, 746, 637, 597, 827, 767, 358, 470,  55, 415, 509, 858, 120, 
  845, 984, 564, 584,  58, 755, 967, 919, 814, 110, 977, 972, 423,  34, 933, 699, 810,  94,  87, 209, 
  362, 393, 526, 620, 121, 994, 676, 983, 367, 698, 236, 500, 684,  97, 500, 185, 617, 155,  47,  89, 
  618, 421, 185, 340, 374, 857, 236, 765, 860, 689, 694, 441, 685, 932, 582, 271,   4, 114, 660, 955, 
  404, 270, 635, 630, 721, 596, 631, 769, 468,  95, 153, 983,   0, 408, 689, 292, 220, 586, 430, 669, 
  524, 188, 965, 910, 334, 575, 996, 506, 189, 133, 273, 525, 542, 881,  75, 916, 663, 610, 461, 956, 
  943, 219, 281, 195, 347, 995, 136, 589, 142, 708, 270,   3, 867, 468,  45, 742, 844, 963, 413, 860, 
  451, 635, 798, 906, 837, 380, 148, 279, 133, 343, 579, 170, 439, 735, 342, 918, 795, 736, 133, 859, 
  650, 486, 856,  63, 431, 677, 686, 670, 198, 123, 512, 572, 878, 888, 346, 340, 606, 826, 844, 375, 
  510, 824, 201, 219, 227, 201, 338, 522, 997,  76, 609, 922, 904, 270, 326, 809, 328, 285,  83, 630, 
  550,  92, 369, 957, 719, 980, 784, 494, 472, 231, 734, 408, 917, 415, 886,  36, 728, 116, 526, 844, 
  659, 493, 959, 395, 112, 758, 154, 664, 744, 156,  99, 767, 668, 620,  51, 747, 239,  97, 737, 399, 
  751, 458,  16,  47, 847, 557, 937,  72, 744, 848,  78, 706, 348,  33, 505,  83, 520, 695, 572, 661, 
  322, 123, 447, 349, 584, 433, 951, 905,  97, 416, 123, 421, 659, 843, 923, 933, 938, 291, 961, 861, 
  145, 367, 714, 153,  66, 697, 744, 657, 477, 511, 602, 445, 950, 553, 278,  96, 937, 555, 368, 415, 
  748, 143, 741, 771, 862, 990,   8, 295, 396,  17, 119, 236, 508, 285, 844, 914,  97, 235, 906, 118, 
   83, 405, 190, 618, 438, 438, 706, 413, 546, 214, 807, 540, 360, 162, 426,  42, 852, 258, 765, 147, 
  550,  13, 547, 704, 227, 733, 678, 587, 623, 795, 309, 538, 920, 372, 971, 929, 590, 466, 749,  42, 
  662, 794, 545,  57, 747, 828, 231, 287, 655, 443, 148, 600,  71, 209, 453, 494, 560, 542, 835,  46, 
  608, 971,  13, 600, 370, 662, 139, 818, 174, 618, 209, 609, 457, 373, 907, 959, 833, 382, 175, 136, 
  374, 157, 417, 761, 312, 710, 389, 746, 155, 238, 941, 567, 450, 717, 282, 408, 997, 194, 918, 799, 
  282, 750, 960, 604, 194, 310, 798, 141, 124, 492,  40, 439,  62, 389, 878, 731, 318, 580, 199, 379, 
  512, 359, 710, 188, 909, 639, 339,  96, 542, 393, 178, 204, 590, 696, 183, 247, 618, 413, 971, 539, 
  702, 430, 715, 949, 425, 760, 971, 207, 956, 373, 144, 106, 921, 591,  16, 774, 796, 179, 924, 709, 
  966, 993, 625, 757,   6, 357,   6, 778,  58, 162, 524, 265, 247, 375, 595, 545, 867, 973, 219, 170, 
  709, 920, 700, 112, 344, 213, 455, 321, 939, 165, 157, 883,  99, 258, 140, 515, 217, 311,  84, 660, 
  715, 504, 149, 198, 566, 341, 521, 474, 351, 951, 546, 183, 603, 876, 538, 901, 754, 363, 893, 973, 
  913, 244, 192, 799, 362, 155, 702, 637, 628, 415, 599, 177, 686, 718, 604, 550, 153, 242, 790, 152, 
  603, 168, 465, 779, 781, 511, 172, 789, 445, 618, 502, 270,  45, 696, 185, 927,  71, 970, 448, 519, 
  201, 918, 190, 958, 174, 835, 941, 916, 255, 575, 693, 976, 150, 665, 612, 452, 227, 259, 784, 568, 
  780, 395, 783, 102, 179, 124,  52,  52, 824, 868, 328, 763, 679, 574, 300, 905, 404, 139, 955, 280, 
  976, 246, 122, 692, 679, 276, 158, 735, 126, 525, 736, 824, 910, 660,  87, 908, 725, 523, 532,  92, 
  473, 876, 886, 500, 715, 258, 458,  28, 768, 219, 382, 504, 883,  10, 716, 783, 241, 519, 576, 892, 
  372, 241, 239, 419, 944, 465, 105, 586, 466, 234,  54, 194, 173, 833, 649, 560, 386, 589, 983, 692, 
  652, 101, 332, 790, 640,  50,  67, 397, 773, 700, 282, 691, 728, 675, 711, 631,  81, 788, 868, 618, 
  635, 265, 892, 617,  11, 764, 624, 990, 609,  58, 615, 781, 480, 939, 461, 611, 163, 184, 465, 314, 
  470, 698, 619, 789, 117,   3, 311, 456, 186, 203, 721, 932, 768, 502, 143, 904, 730, 201, 423, 417, 
  947, 154, 568, 261, 473, 775, 380, 615, 786, 193, 710, 445, 469, 943, 729, 204, 564, 117, 142, 568, 
  342, 854, 790, 984, 824, 297, 982, 834,  21, 944, 482, 759, 312,   2, 512, 659, 599, 860, 803,   4, 
  961, 790, 458, 362, 380,  90, 771, 389, 291, 209, 630, 440, 845, 255, 435, 550,  71, 925, 733, 659, 
  899, 770, 914, 791,  60, 993, 984, 955, 244,  55, 935, 877, 960, 708, 628, 374, 144, 871,   8, 407, 
  438, 591, 590, 124, 164, 402, 195, 757, 242, 435, 238, 136, 675, 569, 455,  48, 984, 938, 717, 381, 
   82, 776, 595,  69, 112, 421, 361, 626, 719, 664, 253, 694, 944, 281, 451, 196, 345, 699, 721, 829, 
  469, 368,  20, 825, 986, 436,  40, 577, 702, 199, 403, 623, 655,  33, 577, 927,  48, 993,  19, 741, 
  107, 221, 193, 932,  70, 832, 172, 355, 396, 210, 191,  54, 477, 861, 755, 198, 434, 199, 481,  52, 
  928, 347, 371, 949, 162,  11, 757, 593, 473, 558, 744, 494, 204, 113,  53, 511,  56, 924, 319, 185, 
  102, 712, 721, 475, 548, 626, 546,   4, 280, 884, 765, 709, 159, 811, 706, 732, 944, 730, 429, 237, 
  956, 924,  75,  24, 985, 357, 143,  86, 440, 209, 838, 576, 813,  81, 262, 809, 761, 310, 483, 447, 
  743, 631, 464, 658, 233,  43, 279, 893, 199, 274, 380, 771, 237, 815,  88,  75, 530, 729, 761, 746, 
  506, 900, 978, 311, 694, 480, 480,  82, 997, 729,  26, 627, 370, 540, 750,  24, 300, 664, 212, 750, 
  374,  72, 211, 540, 554, 230, 622, 780, 364, 284, 954, 266, 382, 630, 916, 299, 909, 877, 136, 485, 
  213, 493, 665, 781, 985, 966, 542, 434, 679, 146, 265, 777, 792, 762, 390, 474, 492, 437,  32, 478, 
  642, 543, 655, 959, 288,  51, 536, 986, 289, 368, 437, 964, 486, 494, 405, 802, 729, 759, 243, 372, 
  110, 465, 647, 774, 967, 115, 543, 226, 850, 102, 997,  58, 669, 902, 668, 638, 418, 692, 895, 415, 
  936, 819, 896,  21, 333, 786, 530, 542, 677, 931, 609, 855, 898, 288, 764, 948, 135, 515, 486, 769, 
   29,  35, 888, 351, 238, 704,  30, 157, 975, 575, 868, 448, 303, 332, 162, 239, 786, 335, 184, 407, 
  534, 282, 225, 979, 464, 137, 373, 402, 487, 526, 494, 979, 433,  71, 174,  48, 313, 521, 229,  63, 
  851,  76, 459, 645, 206,  16, 349,  39, 754, 155, 240, 729, 923, 450,  88, 798, 770,  77, 680, 536, 
  617,  10, 310, 682, 401, 584, 389, 657, 536, 118, 783, 839, 441, 550, 289, 317, 324, 585, 348, 148, 
  142, 315, 981, 432, 743, 920, 810,  57, 160, 400, 855, 858, 667, 311, 385, 672, 150, 121, 145, 994, 
   74, 611, 693, 257, 112, 201, 772, 218, 627, 263, 633, 298, 241, 336,  77, 473, 118, 463, 942, 271, 
   78, 809, 475, 706, 686,  21, 872, 215, 237, 668, 696, 711, 287, 323, 246, 303, 815, 709, 453, 415, 
  282, 513,  49, 643, 893, 455, 355, 578, 420, 514, 888, 656, 193, 615, 391, 375, 694, 789, 840, 506, 
   48,  55, 554, 352, 739, 817, 688, 230, 341, 119,  24, 810, 503,  78,  90, 400, 927, 273, 886, 755, 
  887,   4, 958, 400, 411, 429, 523, 161, 952, 720, 238, 616, 796, 969, 653, 456,  37, 635, 267, 184, 
  710, 465, 522, 824, 865, 839, 168, 213, 350, 286, 862, 100, 309, 119,  18, 787, 285, 864,  81, 811, 
  941, 823,  91, 402, 552, 121, 571, 188, 992, 218, 120, 945, 233, 670, 202, 740, 574, 992, 370, 739, 
  825, 788, 773, 377, 300, 513, 258, 666, 319, 742, 708, 887, 545,  32, 441, 891, 781,  14, 293,   3, 
  638, 522, 546, 257, 680, 182, 576, 207, 192,  39, 199, 960, 909, 659, 389, 900, 659, 456, 576, 772, 
  665, 294,  54, 534, 944, 294, 522, 643, 906, 869,  30, 848, 548, 830, 128, 253, 130, 876, 141, 402, 
  315,  91, 806, 711, 563, 523,  41, 181, 307, 418,  72, 389, 716, 878, 270, 163, 716, 227, 670, 575, 
  395, 161, 589, 405,  15, 244, 219, 486, 937, 702, 271, 361, 724,   3, 214, 935, 431, 797, 704, 876, 
  304, 609, 152, 862,  95, 694, 937, 543, 639, 832, 481, 768, 852, 282, 796, 856, 541, 374, 297,  54, 
  359, 594, 798, 954, 473, 802,  21, 163, 388, 110, 382, 516, 452, 946, 757, 462, 533,   2, 908, 803, 
  705, 786, 693, 744, 652, 850, 464, 698, 174, 728, 682, 319, 321, 122, 753,  40, 444, 955, 103, 709, 
  858, 603, 287, 513, 981, 971, 192,  92, 149, 343, 587, 844, 839, 792, 324, 711, 568, 132, 411,  78, 
  166, 277, 114, 728, 826, 413, 797, 260, 864, 937, 794, 100, 408, 609, 326, 963, 813, 203,  74, 341, 
  618, 273, 126, 663, 833, 497, 531, 286, 939,  97,  42, 176, 468, 716, 689, 235, 512, 811, 819,  14, 
  268, 621,  64, 210,  93, 213, 388, 727, 911, 438, 895, 393, 740,  89,  55,  81, 969, 481, 721, 190, 
  848, 606, 960, 120, 560, 930, 674, 806, 852, 804, 212,  75, 422, 983, 176, 638,  94, 186, 927, 301, 
  208, 486, 698, 274, 895,  63, 830, 388, 871, 806, 389, 413, 821, 227, 154, 926, 107, 134, 669, 545, 
  497, 693, 327, 381, 713, 631, 341, 794, 110, 803, 351, 965, 620, 854, 361, 953, 902, 688, 814, 401, 
   45, 638, 205, 354, 545, 173, 209, 993, 947, 209, 642, 892, 268, 524, 599, 482, 484, 637, 851, 211, 
   25,  43, 709, 727, 642, 863,   0, 790, 765, 413, 181, 417, 639, 425, 829, 433, 106, 877,  94, 612, 
  922, 735, 323, 440, 287, 766, 854, 138, 826, 199, 214, 583, 340, 650, 179, 543,  19, 715, 982, 828, 
  816, 395, 237, 594, 903, 157, 974, 673, 248, 697, 980,  23,  23, 215, 460, 835, 755, 255, 289, 588, 
  339, 604, 755,  21, 883, 601, 856, 328,   9, 991,  57, 437, 757, 747, 688, 231, 863, 177, 201, 761, 
  148, 238, 623, 503, 382, 979, 445, 285, 878, 877, 618, 981, 339,  27, 237,  36, 282, 427, 348, 246, 
  721, 106,  91, 801,  87, 795, 311, 459, 690,  69, 948,  78, 217, 814, 787, 994, 589, 299, 799, 155, 
  433, 515, 918, 456,  24, 628, 935, 741, 705, 928, 658, 796,  41, 186, 928, 760, 434, 834, 563, 852, 
  288, 105, 314, 193, 411, 540, 225, 759, 845, 172,  16, 170, 476, 747, 625, 386,  99, 478, 730, 782, 
  380, 765, 881, 170, 628, 902, 854, 491, 274, 892, 617, 434, 583, 766,  61, 351, 572, 543, 708, 574, 
  444, 314, 278, 710, 703, 799, 221, 292, 361, 791, 667, 478, 375, 423, 197, 405, 510, 743, 178, 543, 
  546, 997, 316, 603,  24, 823, 369, 412, 280, 807, 607, 961,  86, 838, 528, 705, 951, 249,  91, 904, 
  732, 984, 517, 701, 147,  62, 659, 817, 745, 218, 423, 717, 668, 448, 556, 470, 780, 485, 821, 773, 
  726, 155, 521, 955, 524, 122, 411, 627, 341, 984,  58, 891, 259,  47, 818, 966, 372, 742, 295, 223, 
  677, 515, 638, 293, 434, 583, 602,  97, 161, 118, 132, 764, 115, 842, 462, 896,  46, 368, 572,  76, 
  566, 922,  96, 741, 563, 720, 912, 250, 531, 530, 993, 442, 263,  95, 319, 106, 321, 566, 816, 158, 
  727,  26, 110,  11,  69, 295,  84, 773, 283, 357, 822, 469, 831, 974, 709, 318, 252,  12, 462,  28, 
  771, 982, 706, 588, 990, 723, 437, 970, 679, 663, 324, 496, 622, 799, 361, 273, 566, 471, 467, 586, 
  853, 891, 669, 329, 928, 762, 500, 560, 784, 507, 964,  40, 541, 508, 440, 644, 877, 454,  91, 951, 
  323, 530, 100, 106, 600, 734, 231, 257, 897, 348, 956, 258, 338, 431, 703, 659, 963, 602, 404, 851, 
  295,   9, 743, 274, 487, 113, 556, 823,  42,  40, 265, 982,  13,   5, 978,  10, 269, 808, 484, 900, 
  131,  41, 542, 570,  85, 418, 356, 929, 220, 229, 103, 549, 874, 988, 942, 672, 122,  16, 866, 214, 
  370, 294, 202, 330, 331, 893,  96, 562,  36, 732, 218, 625, 609,  54, 293, 643, 351, 795, 517, 153, 
  673, 779, 114, 169, 809, 354, 991,  62, 769, 653,  36, 210, 756, 896, 894, 412, 462, 278, 254, 646, 
  261, 564, 524,  71, 960, 156, 351, 441, 273, 216, 514, 557, 650, 532,  54, 734, 271,  38,  76, 809, 
  269, 555, 774, 227, 429, 132, 179, 455, 349, 810, 706, 295, 118, 389, 380, 792, 130, 383, 960, 822, 
  170, 445, 958, 363, 129, 894, 582, 785, 973, 895,  83, 695, 954, 604, 344, 205, 855,  70, 954, 506, 
  761, 521, 881, 214, 659, 569, 280, 435, 927, 676,  62, 621, 677, 450, 954, 151, 183, 152, 514, 543, 
  281, 427, 544, 511, 406, 173, 858, 389, 729, 700,   7, 290, 751, 627, 517, 715, 599,  54, 108, 885, 
  602, 646, 926, 259, 216, 683, 166, 332,  77, 462, 615, 744, 271, 807,  61, 882, 461, 633, 881, 910, 
  546, 491, 948, 411,   0, 847, 733, 570, 286, 263, 746, 885, 927, 959, 347, 401, 291,  62, 253, 210, 
  495, 612, 567, 620, 259, 741, 717, 809,   7, 760, 832, 631, 251, 899, 773, 409, 566, 717, 522, 255, 
  395,  31, 922, 628, 315, 868, 882, 140, 121, 126, 171, 151, 428,  24, 614, 554, 279, 628, 992, 436, 
   34, 497, 689, 796, 477, 323, 524, 156, 525, 412, 169, 126, 826, 122, 795, 822, 441, 354, 640, 218, 
  104, 905, 828, 340, 193, 509, 381, 884,  21, 544, 642, 537, 463, 613, 491, 954, 860, 986, 568, 105, 
    3, 569,  96, 989, 304, 806, 780, 729, 895, 406, 129, 784, 612, 961, 614, 640, 104, 294, 366, 377, 
  719, 548,  89, 231, 244, 729, 144, 669, 938, 279, 995, 888, 102, 622, 635, 593, 188,  13, 106, 674, 
  348, 937, 642, 188, 619, 132, 282,  52, 283, 779, 618, 850, 513, 790, 783, 412, 213, 235,  28, 521, 
  133,  25, 623, 755, 228, 125, 221, 518, 993, 529, 621, 527, 736, 813, 705, 302, 658, 460, 701, 264, 
  122, 566,  76, 469, 746, 952,  67, 407, 236, 568, 900, 887, 310, 198, 115, 365, 306, 597, 517, 988, 
  110, 795, 331, 660, 977, 520,  72, 888, 613, 821, 972, 807, 880, 231,  97, 187, 735, 493,  13, 358, 
  108, 392, 605,   7, 428, 580, 712, 425, 395, 361, 958,  88, 235, 735, 174, 876, 685, 961, 764, 497, 
  845, 734, 406, 307, 939, 355, 653, 863, 492, 213, 762, 821, 725, 136,  82, 836, 761, 860,  87, 677, 
  188, 885, 233, 883,  13, 177, 534, 809, 427, 878, 675, 394, 146, 868, 856, 323, 184, 312, 704, 530, 
  903, 639, 848,  94,  35, 422, 170, 188, 214, 669, 794, 731, 922, 134, 172, 968, 378, 326,   4, 297, 
  977, 406, 208,  32,  25, 742, 934, 300,  45, 300, 250, 317, 863, 722, 998, 756, 241, 871, 724, 648, 
  205,  64, 848, 246, 169, 418, 584, 903, 109, 811, 862, 227, 116, 252, 479, 552, 828, 114, 568, 109, 
  680, 140, 554, 549, 873, 352, 943, 951, 791, 786, 521, 790, 646, 949, 908, 956,  24, 258, 500,  80, 
   87, 796, 817, 357, 421,   8, 564, 825, 194, 554, 433, 687, 796, 314,  46, 492, 583, 189, 694, 869, 
  628, 213, 469, 166, 493, 941, 580,  52, 196, 731, 355, 481, 761, 653, 470, 607, 599,  88, 296, 521, 
  332, 729, 749, 275, 621, 772, 400, 261, 807, 309, 826, 965, 208, 880, 625, 582, 387, 173, 324, 400, 
  483, 849, 584, 867, 323, 711,  17, 323, 829, 797, 117, 718, 641, 855, 938, 751, 516, 981, 285, 397, 
  483, 175, 234, 400, 793, 523, 503, 169, 869, 536, 485, 120, 148, 418, 160, 857,  85, 562, 701,   9, 
  623,  31, 477, 548, 155, 854, 640, 571, 733, 734, 297, 589,  95, 406, 888, 196, 515,  82, 188, 722, 
  686, 876, 930, 998, 685, 911, 538, 430, 569, 437, 493,  44, 710,  95, 288, 375, 325, 704, 598, 790, 
  824, 210, 561,  76,  51, 886,  77, 623, 700, 275, 752, 841, 670, 618, 801, 259, 486, 847, 544, 331, 
  804, 152, 512, 859, 437, 169, 920,   6, 628, 474, 905, 695, 184, 789, 511, 183, 520, 670, 626, 307, 
  971,  63, 468, 348, 704, 334, 883, 178, 892, 168, 673, 891, 322, 113, 686,  97, 195, 880, 264, 443, 
  517, 549, 116, 532, 240, 127, 352, 545, 222, 216, 625, 553, 617, 479, 326, 489, 272, 760,  80,  45, 
  156, 123, 328, 759, 366, 894, 151, 233, 353, 526, 324, 669, 186, 557, 718, 829, 797, 968, 682, 473, 
  680, 430, 126, 401, 730, 345, 347, 427,  86, 747, 505, 970, 776, 155, 471,  32, 810, 880, 882, 181, 
  226, 407, 879, 961, 689, 476, 469, 816,  13, 233, 810, 984, 425,  29, 338, 897, 616, 366, 205, 513, 
  296, 656, 697,  53, 746, 295, 211, 311, 284, 474,  81, 362, 553, 804, 688, 253, 873, 438,  97, 446, 
  523, 839, 234, 995, 659, 722, 808,  94, 968, 101, 643, 848, 786, 694, 426, 371, 190, 554, 809, 158, 
  990, 367, 769, 752, 993,  75, 743,  16, 651, 726, 861, 509, 217, 796, 797, 173, 874, 704,  93, 263, 
  318, 317, 190, 627,  52, 692, 634, 348, 886, 823, 616, 466, 756, 387, 161, 401, 153, 379,  77, 191, 
  110, 454, 485, 352, 149,  36,  33, 945, 937, 965, 413, 843, 249, 215, 682, 767, 150, 825, 978, 946, 
  203, 780, 433, 236, 766, 403, 234, 920, 616, 542, 621, 645, 937, 450, 934, 683,  97, 507, 166, 177, 
  115, 926, 802, 604, 887,  43,  87, 327, 244, 771, 491, 219, 903, 290, 792, 267, 517, 798,  70, 450
};
