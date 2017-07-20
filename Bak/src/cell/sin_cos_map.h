#pragma once

static std::map<uint32_t, double> sinMap{
    {0,0.0},
    {1,0.017452406437284},
    {2,0.034899496702501},
    {3,0.052335956242944},
    {4,0.069756473744125},
    {5,0.087155742747658},
    {6,0.10452846326765},
    {7,0.12186934340515},
    {8,0.13917310096007},
    {9,0.15643446504023},
    {10,0.17364817766693},
    {11,0.19080899537654},
    {12,0.20791169081776},
    {13,0.22495105434387},
    {14,0.24192189559967},
    {15,0.25881904510252},
    {16,0.275637355817},
    {17,0.29237170472274},
    {18,0.30901699437495},
    {19,0.32556815445716},
    {20,0.34202014332567},
    {21,0.3583679495453},
    {22,0.37460659341591},
    {23,0.39073112848927},
    {24,0.4067366430758},
    {25,0.4226182617407},
    {26,0.43837114678908},
    {27,0.45399049973955},
    {28,0.46947156278589},
    {29,0.48480962024634},
    {30,0.5},
    {31,0.51503807491005},
    {32,0.5299192642332},
    {33,0.54463903501503},
    {34,0.55919290347075},
    {35,0.57357643635105},
    {36,0.58778525229247},
    {37,0.60181502315205},
    {38,0.61566147532566},
    {39,0.62932039104984},
    {40,0.64278760968654},
    {41,0.65605902899051},
    {42,0.66913060635886},
    {43,0.6819983600625},
    {44,0.694658370459},
    {45,0.70710678118655},
    {46,0.71933980033865},
    {47,0.73135370161917},
    {48,0.74314482547739},
    {49,0.75470958022277},
    {50,0.76604444311898},
    {51,0.77714596145697},
    {52,0.78801075360672},
    {53,0.79863551004729},
    {54,0.80901699437495},
    {55,0.81915204428899},
    {56,0.82903757255504},
    {57,0.83867056794542},
    {58,0.84804809615643},
    {59,0.85716730070211},
    {60,0.86602540378444},
    {61,0.8746197071394},
    {62,0.88294759285893},
    {63,0.89100652418837},
    {64,0.89879404629917},
    {65,0.90630778703665},
    {66,0.9135454576426},
    {67,0.92050485345244},
    {68,0.92718385456679},
    {69,0.9335804264972},
    {70,0.93969262078591},
    {71,0.94551857559932},
    {72,0.95105651629515},
    {73,0.95630475596304},
    {74,0.96126169593832},
    {75,0.96592582628907},
    {76,0.970295726276},
    {77,0.97437006478524},
    {78,0.97814760073381},
    {79,0.98162718344766},
    {80,0.98480775301221},
    {81,0.98768834059514},
    {82,0.99026806874157},
    {83,0.99254615164132},
    {84,0.99452189536827},
    {85,0.99619469809175},
    {86,0.99756405025982},
    {87,0.99862953475457},
    {88,0.9993908270191},
    {89,0.99984769515639},
    {90,1.0},
    {91,0.99984769515639},
    {92,0.9993908270191},
    {93,0.99862953475457},
    {94,0.99756405025982},
    {95,0.99619469809175},
    {96,0.99452189536827},
    {97,0.99254615164132},
    {98,0.99026806874157},
    {99,0.98768834059514},
    {100,0.98480775301221},
    {101,0.98162718344766},
    {102,0.97814760073381},
    {103,0.97437006478524},
    {104,0.970295726276},
    {105,0.96592582628907},
    {106,0.96126169593832},
    {107,0.95630475596304},
    {108,0.95105651629515},
    {109,0.94551857559932},
    {110,0.93969262078591},
    {111,0.9335804264972},
    {112,0.92718385456679},
    {113,0.92050485345244},
    {114,0.9135454576426},
    {115,0.90630778703665},
    {116,0.89879404629917},
    {117,0.89100652418837},
    {118,0.88294759285893},
    {119,0.8746197071394},
    {120,0.86602540378444},
    {121,0.85716730070211},
    {122,0.84804809615643},
    {123,0.83867056794542},
    {124,0.82903757255504},
    {125,0.81915204428899},
    {126,0.80901699437495},
    {127,0.79863551004729},
    {128,0.78801075360672},
    {129,0.77714596145697},
    {130,0.76604444311898},
    {131,0.75470958022277},
    {132,0.74314482547739},
    {133,0.73135370161917},
    {134,0.71933980033865},
    {135,0.70710678118655},
    {136,0.694658370459},
    {137,0.6819983600625},
    {138,0.66913060635886},
    {139,0.65605902899051},
    {140,0.64278760968654},
    {141,0.62932039104984},
    {142,0.61566147532566},
    {143,0.60181502315205},
    {144,0.58778525229247},
    {145,0.57357643635105},
    {146,0.55919290347075},
    {147,0.54463903501503},
    {148,0.5299192642332},
    {149,0.51503807491005},
    {150,0.5},
    {151,0.48480962024634},
    {152,0.46947156278589},
    {153,0.45399049973955},
    {154,0.43837114678908},
    {155,0.4226182617407},
    {156,0.4067366430758},
    {157,0.39073112848927},
    {158,0.37460659341591},
    {159,0.3583679495453},
    {160,0.34202014332567},
    {161,0.32556815445716},
    {162,0.30901699437495},
    {163,0.29237170472274},
    {164,0.275637355817},
    {165,0.25881904510252},
    {166,0.24192189559967},
    {167,0.22495105434387},
    {168,0.20791169081776},
    {169,0.19080899537654},
    {170,0.17364817766693},
    {171,0.15643446504023},
    {172,0.13917310096007},
    {173,0.12186934340515},
    {174,0.10452846326765},
    {175,0.087155742747658},
    {176,0.069756473744126},
    {177,0.052335956242944},
    {178,0.034899496702501},
    {179,0.017452406437283},
    {180,1.2246467991474e-16},
    {181,-0.017452406437284},
    {182,-0.034899496702501},
    {183,-0.052335956242944},
    {184,-0.069756473744125},
    {185,-0.087155742747658},
    {186,-0.10452846326765},
    {187,-0.12186934340515},
    {188,-0.13917310096007},
    {189,-0.15643446504023},
    {190,-0.17364817766693},
    {191,-0.19080899537654},
    {192,-0.20791169081776},
    {193,-0.22495105434386},
    {194,-0.24192189559967},
    {195,-0.25881904510252},
    {196,-0.275637355817},
    {197,-0.29237170472274},
    {198,-0.30901699437495},
    {199,-0.32556815445716},
    {200,-0.34202014332567},
    {201,-0.3583679495453},
    {202,-0.37460659341591},
    {203,-0.39073112848927},
    {204,-0.4067366430758},
    {205,-0.4226182617407},
    {206,-0.43837114678908},
    {207,-0.45399049973955},
    {208,-0.46947156278589},
    {209,-0.48480962024634},
    {210,-0.5},
    {211,-0.51503807491005},
    {212,-0.5299192642332},
    {213,-0.54463903501503},
    {214,-0.55919290347075},
    {215,-0.57357643635105},
    {216,-0.58778525229247},
    {217,-0.60181502315205},
    {218,-0.61566147532566},
    {219,-0.62932039104984},
    {220,-0.64278760968654},
    {221,-0.65605902899051},
    {222,-0.66913060635886},
    {223,-0.6819983600625},
    {224,-0.694658370459},
    {225,-0.70710678118655},
    {226,-0.71933980033865},
    {227,-0.73135370161917},
    {228,-0.74314482547739},
    {229,-0.75470958022277},
    {230,-0.76604444311898},
    {231,-0.77714596145697},
    {232,-0.78801075360672},
    {233,-0.79863551004729},
    {234,-0.80901699437495},
    {235,-0.81915204428899},
    {236,-0.82903757255504},
    {237,-0.83867056794542},
    {238,-0.84804809615643},
    {239,-0.85716730070211},
    {240,-0.86602540378444},
    {241,-0.8746197071394},
    {242,-0.88294759285893},
    {243,-0.89100652418837},
    {244,-0.89879404629917},
    {245,-0.90630778703665},
    {246,-0.9135454576426},
    {247,-0.92050485345244},
    {248,-0.92718385456679},
    {249,-0.9335804264972},
    {250,-0.93969262078591},
    {251,-0.94551857559932},
    {252,-0.95105651629515},
    {253,-0.95630475596304},
    {254,-0.96126169593832},
    {255,-0.96592582628907},
    {256,-0.970295726276},
    {257,-0.97437006478524},
    {258,-0.97814760073381},
    {259,-0.98162718344766},
    {260,-0.98480775301221},
    {261,-0.98768834059514},
    {262,-0.99026806874157},
    {263,-0.99254615164132},
    {264,-0.99452189536827},
    {265,-0.99619469809175},
    {266,-0.99756405025982},
    {267,-0.99862953475457},
    {268,-0.9993908270191},
    {269,-0.99984769515639},
    {270,-1.0},
    {271,-0.99984769515639},
    {272,-0.9993908270191},
    {273,-0.99862953475457},
    {274,-0.99756405025982},
    {275,-0.99619469809175},
    {276,-0.99452189536827},
    {277,-0.99254615164132},
    {278,-0.99026806874157},
    {279,-0.98768834059514},
    {280,-0.98480775301221},
    {281,-0.98162718344766},
    {282,-0.97814760073381},
    {283,-0.97437006478524},
    {284,-0.970295726276},
    {285,-0.96592582628907},
    {286,-0.96126169593832},
    {287,-0.95630475596304},
    {288,-0.95105651629515},
    {289,-0.94551857559932},
    {290,-0.93969262078591},
    {291,-0.9335804264972},
    {292,-0.92718385456679},
    {293,-0.92050485345244},
    {294,-0.9135454576426},
    {295,-0.90630778703665},
    {296,-0.89879404629917},
    {297,-0.89100652418837},
    {298,-0.88294759285893},
    {299,-0.8746197071394},
    {300,-0.86602540378444},
    {301,-0.85716730070211},
    {302,-0.84804809615643},
    {303,-0.83867056794542},
    {304,-0.82903757255504},
    {305,-0.81915204428899},
    {306,-0.80901699437495},
    {307,-0.79863551004729},
    {308,-0.78801075360672},
    {309,-0.77714596145697},
    {310,-0.76604444311898},
    {311,-0.75470958022277},
    {312,-0.74314482547739},
    {313,-0.73135370161917},
    {314,-0.71933980033865},
    {315,-0.70710678118655},
    {316,-0.694658370459},
    {317,-0.6819983600625},
    {318,-0.66913060635886},
    {319,-0.65605902899051},
    {320,-0.64278760968654},
    {321,-0.62932039104984},
    {322,-0.61566147532566},
    {323,-0.60181502315205},
    {324,-0.58778525229247},
    {325,-0.57357643635105},
    {326,-0.55919290347075},
    {327,-0.54463903501503},
    {328,-0.52991926423321},
    {329,-0.51503807491005},
    {330,-0.5},
    {331,-0.48480962024634},
    {332,-0.46947156278589},
    {333,-0.45399049973955},
    {334,-0.43837114678908},
    {335,-0.4226182617407},
    {336,-0.4067366430758},
    {337,-0.39073112848927},
    {338,-0.37460659341591},
    {339,-0.3583679495453},
    {340,-0.34202014332567},
    {341,-0.32556815445716},
    {342,-0.30901699437495},
    {343,-0.29237170472274},
    {344,-0.275637355817},
    {345,-0.25881904510252},
    {346,-0.24192189559967},
    {347,-0.22495105434387},
    {348,-0.20791169081776},
    {349,-0.19080899537654},
    {350,-0.17364817766693},
    {351,-0.15643446504023},
    {352,-0.13917310096007},
    {353,-0.12186934340515},
    {354,-0.10452846326765},
    {355,-0.087155742747658},
    {356,-0.069756473744126},
    {357,-0.052335956242944},
    {358,-0.034899496702501},
    {359,-0.017452406437284},
};

static std::map<uint32_t, double> cosMap{
{0,1.0},
{1,0.99984769515639},
{2,0.9993908270191},
{3,0.99862953475457},
{4,0.99756405025982},
{5,0.99619469809175},
{6,0.99452189536827},
{7,0.99254615164132},
{8,0.99026806874157},
{9,0.98768834059514},
{10,0.98480775301221},
{11,0.98162718344766},
{12,0.97814760073381},
{13,0.97437006478524},
{14,0.970295726276},
{15,0.96592582628907},
{16,0.96126169593832},
{17,0.95630475596304},
{18,0.95105651629515},
{19,0.94551857559932},
{20,0.93969262078591},
{21,0.9335804264972},
{22,0.92718385456679},
{23,0.92050485345244},
{24,0.9135454576426},
{25,0.90630778703665},
{26,0.89879404629917},
{27,0.89100652418837},
{28,0.88294759285893},
{29,0.8746197071394},
{30,0.86602540378444},
{31,0.85716730070211},
{32,0.84804809615643},
{33,0.83867056794542},
{34,0.82903757255504},
{35,0.81915204428899},
{36,0.80901699437495},
{37,0.79863551004729},
{38,0.78801075360672},
{39,0.77714596145697},
{40,0.76604444311898},
{41,0.75470958022277},
{42,0.74314482547739},
{43,0.73135370161917},
{44,0.71933980033865},
{45,0.70710678118655},
{46,0.694658370459},
{47,0.6819983600625},
{48,0.66913060635886},
{49,0.65605902899051},
{50,0.64278760968654},
{51,0.62932039104984},
{52,0.61566147532566},
{53,0.60181502315205},
{54,0.58778525229247},
{55,0.57357643635105},
{56,0.55919290347075},
{57,0.54463903501503},
{58,0.5299192642332},
{59,0.51503807491005},
{60,0.5},
{61,0.48480962024634},
{62,0.46947156278589},
{63,0.45399049973955},
{64,0.43837114678908},
{65,0.4226182617407},
{66,0.4067366430758},
{67,0.39073112848927},
{68,0.37460659341591},
{69,0.3583679495453},
{70,0.34202014332567},
{71,0.32556815445716},
{72,0.30901699437495},
{73,0.29237170472274},
{74,0.275637355817},
{75,0.25881904510252},
{76,0.24192189559967},
{77,0.22495105434386},
{78,0.20791169081776},
{79,0.19080899537654},
{80,0.17364817766693},
{81,0.15643446504023},
{82,0.13917310096007},
{83,0.12186934340515},
{84,0.10452846326765},
{85,0.087155742747658},
{86,0.069756473744125},
{87,0.052335956242944},
{88,0.034899496702501},
{89,0.017452406437284},
{90,6.1232339957368e-17},
{91,-0.017452406437283},
{92,-0.034899496702501},
{93,-0.052335956242944},
{94,-0.069756473744125},
{95,-0.087155742747658},
{96,-0.10452846326765},
{97,-0.12186934340515},
{98,-0.13917310096007},
{99,-0.15643446504023},
{100,-0.17364817766693},
{101,-0.19080899537654},
{102,-0.20791169081776},
{103,-0.22495105434387},
{104,-0.24192189559967},
{105,-0.25881904510252},
{106,-0.275637355817},
{107,-0.29237170472274},
{108,-0.30901699437495},
{109,-0.32556815445716},
{110,-0.34202014332567},
{111,-0.3583679495453},
{112,-0.37460659341591},
{113,-0.39073112848927},
{114,-0.4067366430758},
{115,-0.4226182617407},
{116,-0.43837114678908},
{117,-0.45399049973955},
{118,-0.46947156278589},
{119,-0.48480962024634},
{120,-0.5},
{121,-0.51503807491005},
{122,-0.5299192642332},
{123,-0.54463903501503},
{124,-0.55919290347075},
{125,-0.57357643635105},
{126,-0.58778525229247},
{127,-0.60181502315205},
{128,-0.61566147532566},
{129,-0.62932039104984},
{130,-0.64278760968654},
{131,-0.65605902899051},
{132,-0.66913060635886},
{133,-0.6819983600625},
{134,-0.694658370459},
{135,-0.70710678118655},
{136,-0.71933980033865},
{137,-0.73135370161917},
{138,-0.74314482547739},
{139,-0.75470958022277},
{140,-0.76604444311898},
{141,-0.77714596145697},
{142,-0.78801075360672},
{143,-0.79863551004729},
{144,-0.80901699437495},
{145,-0.81915204428899},
{146,-0.82903757255504},
{147,-0.83867056794542},
{148,-0.84804809615643},
{149,-0.85716730070211},
{150,-0.86602540378444},
{151,-0.8746197071394},
{152,-0.88294759285893},
{153,-0.89100652418837},
{154,-0.89879404629917},
{155,-0.90630778703665},
{156,-0.9135454576426},
{157,-0.92050485345244},
{158,-0.92718385456679},
{159,-0.9335804264972},
{160,-0.93969262078591},
{161,-0.94551857559932},
{162,-0.95105651629515},
{163,-0.95630475596304},
{164,-0.96126169593832},
{165,-0.96592582628907},
{166,-0.970295726276},
{167,-0.97437006478524},
{168,-0.97814760073381},
{169,-0.98162718344766},
{170,-0.98480775301221},
{171,-0.98768834059514},
{172,-0.99026806874157},
{173,-0.99254615164132},
{174,-0.99452189536827},
{175,-0.99619469809175},
{176,-0.99756405025982},
{177,-0.99862953475457},
{178,-0.9993908270191},
{179,-0.99984769515639},
{180,-1.0},
{181,-0.99984769515639},
{182,-0.9993908270191},
{183,-0.99862953475457},
{184,-0.99756405025982},
{185,-0.99619469809175},
{186,-0.99452189536827},
{187,-0.99254615164132},
{188,-0.99026806874157},
{189,-0.98768834059514},
{190,-0.98480775301221},
{191,-0.98162718344766},
{192,-0.97814760073381},
{193,-0.97437006478524},
{194,-0.970295726276},
{195,-0.96592582628907},
{196,-0.96126169593832},
{197,-0.95630475596304},
{198,-0.95105651629515},
{199,-0.94551857559932},
{200,-0.93969262078591},
{201,-0.9335804264972},
{202,-0.92718385456679},
{203,-0.92050485345244},
{204,-0.9135454576426},
{205,-0.90630778703665},
{206,-0.89879404629917},
{207,-0.89100652418837},
{208,-0.88294759285893},
{209,-0.8746197071394},
{210,-0.86602540378444},
{211,-0.85716730070211},
{212,-0.84804809615643},
{213,-0.83867056794542},
{214,-0.82903757255504},
{215,-0.81915204428899},
{216,-0.80901699437495},
{217,-0.79863551004729},
{218,-0.78801075360672},
{219,-0.77714596145697},
{220,-0.76604444311898},
{221,-0.75470958022277},
{222,-0.74314482547739},
{223,-0.73135370161917},
{224,-0.71933980033865},
{225,-0.70710678118655},
{226,-0.694658370459},
{227,-0.6819983600625},
{228,-0.66913060635886},
{229,-0.65605902899051},
{230,-0.64278760968654},
{231,-0.62932039104984},
{232,-0.61566147532566},
{233,-0.60181502315205},
{234,-0.58778525229247},
{235,-0.57357643635105},
{236,-0.55919290347075},
{237,-0.54463903501503},
{238,-0.52991926423321},
{239,-0.51503807491005},
{240,-0.5},
{241,-0.48480962024634},
{242,-0.46947156278589},
{243,-0.45399049973955},
{244,-0.43837114678908},
{245,-0.4226182617407},
{246,-0.4067366430758},
{247,-0.39073112848927},
{248,-0.37460659341591},
{249,-0.3583679495453},
{250,-0.34202014332567},
{251,-0.32556815445716},
{252,-0.30901699437495},
{253,-0.29237170472274},
{254,-0.275637355817},
{255,-0.25881904510252},
{256,-0.24192189559967},
{257,-0.22495105434387},
{258,-0.20791169081776},
{259,-0.19080899537654},
{260,-0.17364817766693},
{261,-0.15643446504023},
{262,-0.13917310096007},
{263,-0.12186934340515},
{264,-0.10452846326765},
{265,-0.087155742747658},
{266,-0.069756473744126},
{267,-0.052335956242944},
{268,-0.034899496702501},
{269,-0.017452406437283},
{270,-1.836970198721e-16},
{271,0.017452406437283},
{272,0.034899496702501},
{273,0.052335956242944},
{274,0.069756473744125},
{275,0.087155742747658},
{276,0.10452846326765},
{277,0.12186934340515},
{278,0.13917310096007},
{279,0.15643446504023},
{280,0.17364817766693},
{281,0.19080899537655},
{282,0.20791169081776},
{283,0.22495105434386},
{284,0.24192189559967},
{285,0.25881904510252},
{286,0.275637355817},
{287,0.29237170472274},
{288,0.30901699437495},
{289,0.32556815445716},
{290,0.34202014332567},
{291,0.3583679495453},
{292,0.37460659341591},
{293,0.39073112848927},
{294,0.4067366430758},
{295,0.4226182617407},
{296,0.43837114678908},
{297,0.45399049973955},
{298,0.46947156278589},
{299,0.48480962024634},
{300,0.5},
{301,0.51503807491005},
{302,0.5299192642332},
{303,0.54463903501503},
{304,0.55919290347075},
{305,0.57357643635105},
{306,0.58778525229247},
{307,0.60181502315205},
{308,0.61566147532566},
{309,0.62932039104984},
{310,0.64278760968654},
{311,0.65605902899051},
{312,0.66913060635886},
{313,0.6819983600625},
{314,0.694658370459},
{315,0.70710678118655},
{316,0.71933980033865},
{317,0.73135370161917},
{318,0.74314482547739},
{319,0.75470958022277},
{320,0.76604444311898},
{321,0.77714596145697},
{322,0.78801075360672},
{323,0.79863551004729},
{324,0.80901699437495},
{325,0.81915204428899},
{326,0.82903757255504},
{327,0.83867056794542},
{328,0.84804809615643},
{329,0.85716730070211},
{330,0.86602540378444},
{331,0.8746197071394},
{332,0.88294759285893},
{333,0.89100652418837},
{334,0.89879404629917},
{335,0.90630778703665},
{336,0.9135454576426},
{337,0.92050485345244},
{338,0.92718385456679},
{339,0.9335804264972},
{340,0.93969262078591},
{341,0.94551857559932},
{342,0.95105651629515},
{343,0.95630475596304},
{344,0.96126169593832},
{345,0.96592582628907},
{346,0.970295726276},
{347,0.97437006478524},
{348,0.97814760073381},
{349,0.98162718344766},
{350,0.98480775301221},
{351,0.98768834059514},
{352,0.99026806874157},
{353,0.99254615164132},
{354,0.99452189536827},
{355,0.99619469809175},
{356,0.99756405025982},
{357,0.99862953475457},
{358,0.9993908270191},
{359,0.99984769515639},
};
