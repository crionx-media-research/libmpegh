/* 	Copyright (c) [2020]-[2021] Ittiam Systems Pvt. Ltd.
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted (subject to the limitations in the
   disclaimer below) provided that the following conditions are met:
   •	Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
   •	Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
   •	Neither the names of Dolby Laboratories, Inc. (or its affiliates),
   Ittiam Systems Pvt. Ltd. nor the names of its contributors may be used
   to endorse or promote products derived from this software without
   specific prior written permission.

   NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED
   BY THIS LICENSE. YOUR USE OF THE SOFTWARE MAY REQUIRE ADDITIONAL PATENT
   LICENSE(S) BY THIRD PARTIES, INCLUDING, WITHOUT LIMITATION, DOLBY
   LABORATORIES, INC. OR ANY OF ITS AFFILIATES. THIS SOFTWARE IS PROVIDED
   BY ITTIAM SYSTEMS LTD. AND ITS CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
   OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
   IN NO EVENT SHALL ITTIAM SYSTEMS LTD OR ITS CONTRIBUTORS BE LIABLE FOR
   ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
   OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
   IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------
*/

#include <impeghd_type_def.h>
#include "impeghd_cicp_defines.h"
#include "impeghd_format_conv_defines.h"

/**
 * @defgroup FmtConvROM Format converter ROM Tables
 * @ingroup  FmtConvROM
 * @brief Format converter ROM Tables
 *
 * @{
 */

const FLOAT32 ia_eq_48k_freq_fc[58] = {
    0.00000f,     93.38522f,    186.77043f,   280.15564f,   373.54086f,   466.92606f,
    560.31128f,   653.69647f,   747.08173f,   840.46686f,   933.85211f,   1027.23730f,
    1120.62256f,  1214.00781f,  1307.39294f,  1400.77820f,  1494.16345f,  1587.54858f,
    1680.93372f,  1774.31897f,  1867.70422f,  1961.08948f,  2054.47461f,  2147.85986f,
    2241.24512f,  2334.63037f,  2428.01563f,  2521.40063f,  2614.78589f,  2708.17114f,
    2801.55640f,  2894.94165f,  2988.32690f,  3175.09717f,  3455.25269f,  3782.10107f,
    4155.64209f,  4529.18262f,  4902.72363f,  5322.95703f,  5789.88330f,  6256.80908f,
    6817.12012f,  7470.81689f,  8124.51318f,  8778.20996f,  9478.59863f,  10272.37305f,
    11159.53320f, 12140.07715f, 13214.00781f, 14334.63086f, 15548.63867f, 16902.72266f,
    18350.19531f, 19891.05078f, 21571.98438f, 23206.22656f};
const FLOAT32 ia_eq_44k_freq_fc[58] = {
    0.0f,         85.79766537f, 171.5953307f, 257.3929961f, 343.1906615f, 428.9883268f,
    514.7859922f, 600.5836576f, 686.381323f,  772.1789883f, 857.9766537f, 943.7743191f,
    1029.571984f, 1115.36965f,  1201.167315f, 1286.964981f, 1372.762646f, 1458.560311f,
    1544.357977f, 1630.155642f, 1715.953307f, 1801.750973f, 1887.548638f, 1973.346304f,
    2059.143969f, 2144.941634f, 2230.7393f,   2316.536965f, 2402.33463f,  2488.132296f,
    2573.929961f, 2659.727626f, 2745.525292f, 2917.120623f, 3174.513619f, 3474.805447f,
    3817.996109f, 4161.18677f,  4504.377432f, 4890.466926f, 5319.455253f, 5748.44358f,
    6263.229572f, 6863.81323f,  7464.396887f, 8064.980545f, 8708.463035f, 9437.743191f,
    10252.82101f, 11153.6965f,  12140.36965f, 13169.94163f, 14285.31128f, 15529.37743f,
    16859.24125f, 18274.90272f, 19819.2607f,  21320.71984f};
const FLOAT32 ia_eq_32k_freq_fc[58] = {
    0.0f,         62.25680934f, 124.5136187f, 186.770428f,  249.0272374f, 311.2840467f,
    373.540856f,  435.7976654f, 498.0544747f, 560.311284f,  622.5680934f, 684.8249027f,
    747.0817121f, 809.3385214f, 871.5953307f, 933.8521401f, 996.1089494f, 1058.365759f,
    1120.622568f, 1182.879377f, 1245.136187f, 1307.392996f, 1369.649805f, 1431.906615f,
    1494.163424f, 1556.420233f, 1618.677043f, 1680.933852f, 1743.190661f, 1805.447471f,
    1867.70428f,  1929.961089f, 1992.217899f, 2116.731518f, 2303.501946f, 2521.400778f,
    2770.428016f, 3019.455253f, 3268.48249f,  3548.638132f, 3859.922179f, 4171.206226f,
    4544.747082f, 4980.544747f, 5416.342412f, 5852.140078f, 6319.066148f, 6848.249027f,
    7439.688716f, 8093.385214f, 8809.338521f, 9556.420233f, 10365.75875f, 11268.48249f,
    12233.46304f, 13260.70039f, 14381.32296f, 15470.81712f};
const FLOAT32 ia_eq_29k_freq_fc[58] = {
    0.000000f,     57.197701f,    114.395401f,   171.593094f,  228.790802f,  285.988525f,
    343.186188f,   400.383911f,   457.581604f,   514.779297f,  571.991699f,  629.189392f,
    686.387085f,   743.584778f,   800.782471f,   857.980225f,  915.177917f,  972.375549f,
    1029.573242f,  1086.770996f,  1143.968750f,  1201.166382f, 1258.364136f, 1315.561768f,
    1372.759521f,  1429.957275f,  1487.154907f,  1544.352539f, 1601.550293f, 1658.747925f,
    1715.960449f,  1773.158081f,  1830.355835f,  1944.751099f, 2116.344238f, 2316.543701f,
    2545.334473f,  2774.125000f,  3002.916016f,  3260.312988f, 3546.301514f, 3832.289795f,
    4175.491211f,  4575.875000f,  4976.258789f,  5376.657227f, 5805.646973f, 6291.835449f,
    6835.220703f,  7435.804199f,  8093.584961f,  8779.957031f, 9523.541992f, 10352.916016f,
    11239.487305f, 12183.271484f, 13212.844727f, 14213.811523f};
const FLOAT32 ia_eq_24k_freq_fc[58] = {
    0.0f,         46.692607f,   93.38521401f, 140.077821f,  186.770428f,  233.463035f,
    280.155642f,  326.848249f,  373.540856f,  420.233463f,  466.92607f,   513.618677f,
    560.311284f,  607.0038911f, 653.6964981f, 700.3891051f, 747.0817121f, 793.7743191f,
    840.4669261f, 887.1595331f, 933.8521401f, 980.5447471f, 1027.237354f, 1073.929961f,
    1120.622568f, 1167.315175f, 1214.007782f, 1260.700389f, 1307.392996f, 1354.085603f,
    1400.77821f,  1447.470817f, 1494.163424f, 1587.548638f, 1727.626459f, 1891.050584f,
    2077.821012f, 2264.59144f,  2451.361868f, 2661.478599f, 2894.941634f, 3128.404669f,
    3408.560311f, 3735.40856f,  4062.256809f, 4389.105058f, 4739.299611f, 5136.18677f,
    5579.766537f, 6070.038911f, 6607.003891f, 7167.315175f, 7774.319066f, 8451.361868f,
    9175.097276f, 9945.525292f, 10785.99222f, 11603.11284f};

const FLOAT32 ia_eq_22k_freq_fc[58] = {
    0.0f,         42.89883268f, 85.79766537f, 128.6964981f, 171.5953307f, 214.4941634f,
    257.3929961f, 300.2918288f, 343.1906615f, 386.0894942f, 428.9883268f, 471.8871595f,
    514.7859922f, 557.6848249f, 600.5836576f, 643.4824903f, 686.381323f,  729.2801556f,
    772.1789883f, 815.077821f,  857.9766537f, 900.8754864f, 943.7743191f, 986.6731518f,
    1029.571984f, 1072.470817f, 1115.36965f,  1158.268482f, 1201.167315f, 1244.066148f,
    1286.964981f, 1329.863813f, 1372.762646f, 1458.560311f, 1587.256809f, 1737.402724f,
    1908.998054f, 2080.593385f, 2252.188716f, 2445.233463f, 2659.727626f, 2874.22179f,
    3131.614786f, 3431.906615f, 3732.198444f, 4032.490272f, 4354.231518f, 4718.871595f,
    5126.410506f, 5576.848249f, 6070.184825f, 6584.970817f, 7142.655642f, 7764.688716f,
    8429.620623f, 9137.451362f, 9909.63035f,  10660.35992f};
const FLOAT32 ia_eq_16k_freq_fc[58] = {
    0.0f,         31.12840467f, 62.25680934f, 93.38521401f, 124.5136187f, 155.6420233f,
    186.770428f,  217.8988327f, 249.0272374f, 280.155642f,  311.2840467f, 342.4124514f,
    373.540856f,  404.6692607f, 435.7976654f, 466.92607f,   498.0544747f, 529.1828794f,
    560.311284f,  591.4396887f, 622.5680934f, 653.6964981f, 684.8249027f, 715.9533074f,
    747.0817121f, 778.2101167f, 809.3385214f, 840.4669261f, 871.5953307f, 902.7237354f,
    933.8521401f, 964.9805447f, 996.1089494f, 1058.365759f, 1151.750973f, 1260.700389f,
    1385.214008f, 1509.727626f, 1634.241245f, 1774.319066f, 1929.961089f, 2085.603113f,
    2272.373541f, 2490.272374f, 2708.171206f, 2926.070039f, 3159.533074f, 3424.124514f,
    3719.844358f, 4046.692607f, 4404.669261f, 4778.210117f, 5182.879377f, 5634.241245f,
    6116.731518f, 6630.350195f, 7190.661479f, 7735.40856f};
const FLOAT32 ia_eq_14k_freq_fc[58] = {
    0.000000f,    28.598850f,   57.197701f,   85.796547f,   114.395401f,  142.994263f,
    171.593094f,  200.191956f,  228.790802f,  257.389648f,  285.995850f,  314.594696f,
    343.193542f,  371.792389f,  400.391235f,  428.990112f,  457.588959f,  486.187775f,
    514.786621f,  543.385498f,  571.984375f,  600.583191f,  629.182068f,  657.780884f,
    686.379761f,  714.978638f,  743.577454f,  772.176270f,  800.775146f,  829.373962f,
    857.980225f,  886.579041f,  915.177917f,  972.375549f,  1058.172119f, 1158.271851f,
    1272.667236f, 1387.062500f, 1501.458008f, 1630.156494f, 1773.150757f, 1916.144897f,
    2087.745605f, 2287.937500f, 2488.129395f, 2688.328613f, 2902.823486f, 3145.917725f,
    3417.610352f, 3717.902100f, 4046.792480f, 4389.978516f, 4761.770996f, 5176.458008f,
    5619.743652f, 6091.635742f, 6606.422363f, 7106.905762f};

const WORD32 ia_erb_idx_freq_fc[58] = {
    1,  2,  3,  4,  5,  6,  7,   8,   9,   10,  11,  12,  13,  14,  15,  16,  17,  18, 19, 20,
    21, 22, 23, 24, 25, 26, 27,  28,  29,  30,  31,  32,  33,  36,  39,  43,  47,  51, 55, 60,
    65, 70, 77, 84, 91, 98, 106, 115, 125, 136, 148, 160, 174, 189, 205, 222, 241, 256};

const WORD32 ia_dmx_rules_fc[][8] = {
    /* input    dest 1       dest 2      gain   processing idx/params */
    {CH_M_000, CH_M_L022, CH_M_R022, 100, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_000, CH_M_L030, CH_M_R030, 100, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_L022, CH_M_000, CH_M_L030, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L022, CH_M_L030, -1, GAIN4, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_R022, CH_M_000, CH_M_R030, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R022, CH_M_R030, -1, GAIN4, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_L045, CH_M_L030, CH_M_L060, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L045, CH_M_L030, -1, GAIN4, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_R045, CH_M_R030, CH_M_R060, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R045, CH_M_R030, -1, GAIN4, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_L060, CH_M_L045, CH_M_L090, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L060, CH_M_L030, CH_M_L090, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L060, CH_M_L045, CH_M_L110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L060, CH_M_L030, CH_M_L110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L060, CH_M_L030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_R060, CH_M_R045, CH_M_R090, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R060, CH_M_R030, CH_M_R090, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R060, CH_M_R045, CH_M_R110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R060, CH_M_R030, CH_M_R110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R060, CH_M_R030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_L090, CH_M_L060, CH_M_L110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L090, CH_M_L045, CH_M_L110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L090, CH_M_L030, CH_M_L110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_L090, CH_M_L030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_R090, CH_M_R060, CH_M_R110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R090, CH_M_R045, CH_M_R110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R090, CH_M_R030, CH_M_R110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_R090, CH_M_R030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_L110, CH_M_L135, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L110, CH_M_L090, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L110, CH_M_L045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L110, CH_M_L030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_R110, CH_M_R135, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R110, CH_M_R090, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R110, CH_M_R045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R110, CH_M_R030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_L135, CH_M_L110, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L135, CH_M_L150, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L135, CH_M_L090, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L135, CH_M_L045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L135, CH_M_L030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_R135, CH_M_R110, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R135, CH_M_R150, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R135, CH_M_R090, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R135, CH_M_R045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R135, CH_M_R030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_L150, CH_M_L135, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L150, CH_M_L110, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L150, CH_M_L045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_L150, CH_M_L030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_R150, CH_M_R135, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R150, CH_M_R110, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R150, CH_M_R045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_M_R150, CH_M_R030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_M_180, CH_M_L150, CH_M_R150, 100, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_180, CH_M_L135, CH_M_R135, 100, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_180, CH_M_L110, CH_M_R110, 100, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_180, CH_M_L090, CH_M_R090, GAIN1, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_180, CH_M_L045, CH_M_R045, GAIN2, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_M_180, CH_M_L030, CH_M_R030, GAIN2, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    /**/
    {CH_U_000, CH_U_L030, CH_U_R030, 100, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_U_000, CH_M_L030, CH_M_R030, GAIN3, RULE_PANNING, 30, 0, RULE_EQ1},
    /**/
    {CH_U_L045, CH_U_L030, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L045, CH_M_L045, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ1},
    {CH_U_L045, CH_M_L030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ1},
    /**/
    {CH_U_R045, CH_U_R030, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R045, CH_M_R045, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ1},
    {CH_U_R045, CH_M_R030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ1},
    /**/
    {CH_U_L030, CH_U_L045, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L030, CH_M_L030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ1},
    /**/
    {CH_U_R030, CH_U_R045, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R030, CH_M_R030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ1},
    /**/
    {CH_U_L090, CH_U_L030, CH_U_L110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_U_L090, CH_U_L030, CH_U_L135, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_U_L090, CH_U_L045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L090, CH_U_L030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L090, CH_M_L045, CH_M_L110, GAIN3, RULE_AUTOPAN, 0, 0, RULE_EQ2},
    {CH_U_L090, CH_M_L030, CH_M_L110, GAIN3, RULE_AUTOPAN, 0, 0, RULE_EQ2},
    {CH_U_L090, CH_M_L030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    /**/
    {CH_U_R090, CH_U_R030, CH_U_R110, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_U_R090, CH_U_R030, CH_U_R135, GAIN4, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_U_R090, CH_U_R045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R090, CH_U_R030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R090, CH_M_R045, CH_M_R110, GAIN3, RULE_AUTOPAN, 0, 0, RULE_EQ2},
    {CH_U_R090, CH_M_R030, CH_M_R110, GAIN3, RULE_AUTOPAN, 0, 0, RULE_EQ2},
    {CH_U_R090, CH_M_R030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    /**/
    {CH_U_L110, CH_U_L135, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L110, CH_U_L090, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L110, CH_U_L045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L110, CH_U_L030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L110, CH_M_L110, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_L110, CH_M_L045, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_L110, CH_M_L030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    /**/
    {CH_U_R110, CH_U_R135, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R110, CH_U_R090, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R110, CH_U_R045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R110, CH_U_R030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R110, CH_M_R110, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_R110, CH_M_R045, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_R110, CH_M_R030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    /**/
    {CH_U_L135, CH_U_L110, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L135, CH_U_L090, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L135, CH_U_L045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L135, CH_U_L030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_L135, CH_M_L110, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_L135, CH_M_L045, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_L135, CH_M_L030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    /**/
    {CH_U_R135, CH_U_R110, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R135, CH_U_R090, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R135, CH_U_R045, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R135, CH_U_R030, -1, GAIN1, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_U_R135, CH_M_R110, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_R135, CH_M_R045, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_R135, CH_M_R030, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    /**/
    {CH_U_180, CH_U_L135, CH_U_R135, 100, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_U_180, CH_U_L110, CH_U_R110, 100, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_U_180, CH_M_180, -1, GAIN3, RULE_NOPROC, 0, 0, RULE_EQ2},
    {CH_U_180, CH_M_L110, CH_M_R110, GAIN3, RULE_AUTOPAN, 0, 0, RULE_EQ2},
    {CH_U_180, CH_U_L030, CH_U_R030, GAIN1, RULE_AUTOPAN, 0, 0, RULE_NOPROC},
    {CH_U_180, CH_M_L030, CH_M_R030, GAIN3, RULE_AUTOPAN, 0, 0, RULE_EQ2},
    /**/
    {CH_T_000, -1, -1, 80, RULE_TOP2ALLU, 0, 0, RULE_EQ3},
    {CH_T_000, -1, -1, 80, RULE_TOP2ALLM, 0, 0, RULE_EQ4},
    /**/
    {CH_L_000, CH_M_000, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_L_000, CH_M_L030, CH_M_R030, 100, RULE_PANNING, 30, 0, RULE_NOPROC},
    /**/
    {CH_L_L045, CH_M_L045, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_L_L045, CH_M_L030, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_L_R045, CH_M_R045, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_L_R045, CH_M_R030, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    /**/
    {CH_LFE1, CH_LFE2, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_LFE1, CH_M_L030, CH_M_R030, 100, RULE_PANNING, 30, 0, RULE_NOPROC},
    /**/
    {CH_LFE2, CH_LFE1, -1, 100, RULE_NOPROC, 0, 0, RULE_NOPROC},
    {CH_LFE2, CH_M_L030, CH_M_R030, 100, RULE_PANNING, 30, 0, RULE_NOPROC},

    /* indicate end of matrix */
    {-1, -1, -1, -1, -1, -1, -1, -1}};

const FLOAT32 ia_peak_filter_params_fc[5][12] = {
    {12000.0f, 0.3f, -2.0f, 1},
    {12000.0f, 0.3f, -3.5f, 1},
    {200.0f, 0.3f, -6.5f, 0.7f, 1300.0f, 0.5f, 1.8f, 0, 600.0f, 1.0f, 2.0f, 0},
    {5000.0f, 1.0f, 4.5f, -3.1f, 1100.0f, 0.8f, 1.8f, 0},
    {35.0f, 0.25f, -1.3f, 1}};
const FLOAT32 *ia_eq_freq_fc[11] = {0,
                                    0,
                                    0,
                                    ia_eq_48k_freq_fc,
                                    ia_eq_44k_freq_fc,
                                    ia_eq_32k_freq_fc,
                                    ia_eq_24k_freq_fc,
                                    ia_eq_22k_freq_fc,
                                    ia_eq_16k_freq_fc,
                                    ia_eq_14k_freq_fc,
                                    ia_eq_29k_freq_fc};

/* 22_2 to 5_1 */
const WORD32 ia_comp_tmplt_13_to_6[15 * 4] = {
    1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0,
    0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0};

/* 5_2_1 to 5_1 */
const WORD32 ia_comp_tmplt_14_to_6[5 * 4] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                                             1, 0, 0, 0, 0, 1, 1, 0, 0, 0};

/* 7_1 to 5_1 */
const WORD32 ia_comp_tmplt_12_to_6[5 * 4] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                                             1, 0, 0, 0, 0, 1, 0, 0, 0, 1};

/* 7_1_ALT to 5_1 */
const WORD32 ia_comp_tmplt_7_to_6[5 * 4] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                                            1, 0, 0, 0, 0, 1, 1, 0, 0, 1};

/* 22_2 to 5_2_1 */
const WORD32 ia_comp_tmplt_13_to_14[15 * 5] = {
    1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0};

/* 22_2 to 7_1 */
const WORD32 ia_comp_tmplt_13_to_12[15 * 5] = {
    1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1,
    0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0};

/* 22_2 to 7_1_ALT */
const WORD32 ia_comp_tmplt_13_to_7[15 * 5] = {
    0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1,
    0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0};

/* 22_2 to 2_0 */
const WORD32 ia_comp_tmplt_13_to_2[15 * 1] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

const WORD32 ia_comp_tmplt_inp_idx[] = {13, 13, 13, 13, 14, 12, 7, 13};

const WORD32 ia_comp_tmplt_out_idx[] = {6, 14, 12, 7, 6, 6, 6, 2};

const WORD32 *ia_comp_tmplt_data[] = {
    (const WORD32 *)&ia_comp_tmplt_13_to_6,  (const WORD32 *)&ia_comp_tmplt_13_to_14,
    (const WORD32 *)&ia_comp_tmplt_13_to_12, (const WORD32 *)&ia_comp_tmplt_13_to_7,
    (const WORD32 *)&ia_comp_tmplt_14_to_6,  (const WORD32 *)&ia_comp_tmplt_12_to_6,
    (const WORD32 *)&ia_comp_tmplt_7_to_6,   (const WORD32 *)&ia_comp_tmplt_13_to_2};

const FLOAT32 ia_eq_precisions[4] = {1.0f, 0.5f, 0.25f, 0.1f};

const FLOAT32 ia_eq_min_ranges[2][4] = {{-8.0f, -8.0f, -8.0f, -6.4f},
                                        {-16.0f, -16.0f, -16.0f, -12.8f}};

const WORD32 ia_erb_freq_idx_256_58[58] = {
    1,  2,  3,  4,  5,  6,  7,   8,   9,   10,  11,  12,  13,  14,  15,  16,  17,  18, 19, 20,
    21, 22, 23, 24, 25, 26, 27,  28,  29,  30,  31,  32,  33,  36,  39,  43,  47,  51, 55, 60,
    65, 70, 77, 84, 91, 98, 106, 115, 125, 136, 148, 160, 174, 189, 205, 222, 241, 257};

const FLOAT32 ia_nrm_stft_erb_58[58] = {
    0.000000000000000f, 0.003891050583658f, 0.007782101167315f, 0.011673151750973f,
    0.015564202334630f, 0.019455252918288f, 0.023346303501946f, 0.027237354085603f,
    0.031128404669261f, 0.035019455252918f, 0.038910505836576f, 0.042801556420233f,
    0.046692607003891f, 0.050583657587549f, 0.054474708171206f, 0.058365758754864f,
    0.062256809338521f, 0.066147859922179f, 0.070038910505837f, 0.073929961089494f,
    0.077821011673152f, 0.081712062256809f, 0.085603112840467f, 0.089494163424125f,
    0.093385214007782f, 0.097276264591440f, 0.101167315175097f, 0.105058365758755f,
    0.108949416342412f, 0.112840466926070f, 0.116731517509728f, 0.120622568093385f,
    0.124513618677043f, 0.132295719844358f, 0.143968871595331f, 0.157587548638132f,
    0.173151750972763f, 0.188715953307393f, 0.204280155642023f, 0.221789883268482f,
    0.241245136186770f, 0.260700389105058f, 0.284046692607004f, 0.311284046692607f,
    0.338521400778210f, 0.365758754863813f, 0.394941634241245f, 0.428015564202335f,
    0.464980544747082f, 0.505836575875486f, 0.550583657587549f, 0.597276264591440f,
    0.647859922178988f, 0.704280155642023f, 0.764591439688716f, 0.828793774319066f,
    0.898832684824903f, 0.966926070038911f};

/** @} */ /* End of FmtConvROM */