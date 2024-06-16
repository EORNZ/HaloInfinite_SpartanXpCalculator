/*Copyright 2024 Edoardo Renzi

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
        limitations under the License.
*/
#include "../include/Rank.h"

// Initializes and provides the data for all the possible ranks in the game.
std::vector<Rank> getRankData() {
    std::vector<Rank> ranks = {
            {"Recruit", 0, 0, 100},

            {"Bronze Cadet 1", 1, 100, 1000},
            {"Bronze Cadet 2", 2, 1100, 1250},
            {"Bronze Cadet 3", 3, 2350, 1500},
            {"Bronze Private 1", 1, 3850, 1000},
            {"Bronze Private 2", 2, 4850, 1250},
            {"Bronze Private 3", 3, 6100, 1750},
            {"Bronze Lance Corporal 1", 1, 7850, 1250},
            {"Bronze Lance Corporal 2", 2, 9100, 1500},
            {"Bronze Lance Corporal 3", 3, 10600, 1750},
            {"Bronze Corporal 1", 1, 12350, 1250},
            {"Bronze Corporal 2", 2, 13600, 1500},
            {"Bronze Corporal 3", 3, 15100, 2000},
            {"Bronze Sergeant 1", 1, 17100, 1500},
            {"Bronze Sergeant 2", 2, 18600, 1750},
            {"Bronze Sergeant 3", 3, 20350, 2250},
            {"Bronze Staff Sergeant 1", 1, 22600, 1500},
            {"Bronze Staff Sergeant 2", 2, 24100, 1750},
            {"Bronze Staff Sergeant 3", 3, 25850, 2500},
            {"Bronze Gunnery Sergeant 1", 1, 28350, 1750},
            {"Bronze Gunnery Sergeant 2", 2, 30100, 2000},
            {"Bronze Gunnery Sergeant 3", 3, 32100, 2750},
            {"Bronze Master Sergeant 1", 1, 34850, 1750},
            {"Bronze Master Sergeant 2", 2, 36600, 2250},
            {"Bronze Master Sergeant 3", 3, 38850, 3000},
            {"Bronze Lieutenant 1", 1, 41850, 2000},
            {"Bronze Lieutenant 2", 2, 43850, 2500},
            {"Bronze Lieutenant 3", 3, 46350, 3250},
            {"Bronze Captain 1", 1, 49600, 2250},
            {"Bronze Captain 2", 2, 51850, 2750},
            {"Bronze Captain 3", 3, 54600, 3500},
            {"Bronze Major 1", 1, 58100, 2500},
            {"Bronze Major 2", 2, 60600, 3000},
            {"Bronze Major 3", 3, 63600, 3750},
            {"Bronze Lt Colonel 1", 1, 67350, 2750},
            {"Bronze Lt Colonel 2", 2, 70100, 3250},
            {"Bronze Lt Colonel 3", 3, 73350, 4000},
            {"Bronze Colonel 1", 1, 77350, 3000},
            {"Bronze Colonel 2", 2, 80350, 3500},
            {"Bronze Colonel 3", 3, 83850, 4500},
            {"Bronze Brigadier General 1", 1, 88350, 3250},
            {"Bronze Brigadier General 2", 2, 91600, 3750},
            {"Bronze Brigadier General 3", 3, 95350, 5000},
            {"Bronze General 1", 1, 100350, 3500},
            {"Bronze General 2", 2, 103850, 4000},
            {"Bronze General 3", 3, 107850, 5250},

            {"Silver Cadet 1", 1, 113100, 2250},
            {"Silver Cadet 2", 2, 115350, 2500},
            {"Silver Cadet 3", 3, 117850, 3250},
            {"Silver Private 1", 1, 121100, 2250},
            {"Silver Private 2", 2, 123350, 2750},
            {"Silver Private 3", 3, 126100, 3750},
            {"Silver Lance Corporal 1", 1, 129850, 2500},
            {"Silver Lance Corporal 2", 2, 132350, 3000},
            {"Silver Lance Corporal 3", 3, 135350, 4000},
            {"Silver Corporal 1", 1, 139350, 2750},
            {"Silver Corporal 2", 2, 142100, 3250},
            {"Silver Corporal 3", 3, 145350, 4250},
            {"Silver Sergeant 1", 1, 149600, 3000},
            {"Silver Sergeant 2", 2, 152600, 3750},
            {"Silver Sergeant 3", 3, 156350, 4750},
            {"Silver Staff Sergeant 1", 1, 161100, 3250},
            {"Silver Staff Sergeant 2", 2, 164350, 4000},
            {"Silver Staff Sergeant 3", 3, 168350, 5250},
            {"Silver Gunnery Sergeant 1", 1, 173600, 3750},
            {"Silver Gunnery Sergeant 2", 2, 177350, 4250},
            {"Silver Gunnery Sergeant 3", 3, 181600, 5750},
            {"Silver Master Sergeant 1", 1, 187350, 4000},
            {"Silver Master Sergeant 2", 2, 191350, 4750},
            {"Silver Master Sergeant 3", 3, 196100, 6250},
            {"Silver Lieutenant 1", 1, 202350, 4250},
            {"Silver Lieutenant 2", 2, 206600, 5250},
            {"Silver Lieutenant 3", 3, 211850, 6750},
            {"Silver Captain 1", 1, 218600, 4750},
            {"Silver Captain 2", 2, 223350, 5750},
            {"Silver Captain 3", 3, 229100, 7250},
            {"Silver Major 1", 1, 236350, 5250},
            {"Silver Major 2", 2, 241600, 6250},
            {"Silver Major 3", 3, 247850, 8000},
            {"Silver Lt Colonel 1", 1, 255850, 5750},
            {"Silver Lt Colonel 2", 2, 261600, 6750},
            {"Silver Lt Colonel 3", 3, 268350, 8750},
            {"Silver Colonel 1", 1, 277100, 6250},
            {"Silver Colonel 2", 2, 283350, 7500},
            {"Silver Colonel 3", 3, 290850, 9500},
            {"Silver Brigadier General 1", 1, 300350, 6750},
            {"Silver Brigadier General 2", 2, 307100, 8000},
            {"Silver Brigadier General 3", 3, 315100, 10000},
            {"Silver General 1", 1, 325100, 7250},
            {"Silver General 2", 2, 332350, 8750},
            {"Silver General 3", 3, 341100, 12500},

            {"Gold Cadet 1", 1, 353600, 4500},
            {"Gold Cadet 2", 2, 358100, 5500},
            {"Gold Cadet 3", 3, 363600, 7250},
            {"Gold Private 1", 1, 370850, 5000},
            {"Gold Private 2", 2, 375850, 6000},
            {"Gold Private 3", 3, 381850, 7750},
            {"Gold Lance Corporal 1", 1, 389600, 5500},
            {"Gold Lance Corporal 2", 2, 395100, 6500},
            {"Gold Lance Corporal 3", 3, 401600, 8500},
            {"Gold Corporal 1", 1, 410100, 6000},
            {"Gold Corporal 2", 2, 416100, 7250},
            {"Gold Corporal 3", 3, 423350, 9250},
            {"Gold Sergeant 1", 1, 432600, 6500},
            {"Gold Sergeant 2", 2, 439100, 7750},
            {"Gold Sergeant 3", 3, 446850, 10000},
            {"Gold Staff Sergeant 1", 1, 456850, 7000},
            {"Gold Staff Sergeant 2", 2, 463850, 8500},
            {"Gold Staff Sergeant 3", 3, 472350, 10000},
            {"Gold Gunnery Sergeant 1", 1, 482350, 7750},
            {"Gold Gunnery Sergeant 2", 2, 490100, 9250},
            {"Gold Gunnery Sergeant 3", 3, 499350, 12500},
            {"Gold Master Sergeant 1", 1, 511850, 8500},
            {"Gold Master Sergeant 2", 2, 520350, 10000},
            {"Gold Master Sergeant 3", 3, 530350, 12500},
            {"Gold Lieutenant 1", 1, 542850, 9250},
            {"Gold Lieutenant 2", 2, 552100, 10000},
            {"Gold Lieutenant 3", 3, 562100, 15000},
            {"Gold Captain 1", 1, 577100, 10000},
            {"Gold Captain 2", 2, 587100, 12500},
            {"Gold Captain 3", 3, 599600, 15000},
            {"Gold Major 1", 1, 614600, 10000},
            {"Gold Major 2", 2, 624600, 12500},
            {"Gold Major 3", 3, 637100, 17500},
            {"Gold Lt Colonel 1", 1, 654600, 12500},
            {"Gold Lt Colonel 2", 2, 667100, 15000},
            {"Gold Lt Colonel 3", 3, 682100, 20000},
            {"Gold Colonel 1", 1, 702100, 12500},
            {"Gold Colonel 2", 2, 714600, 15000},
            {"Gold Colonel 3", 3, 729600, 20000},
            {"Gold Brigadier General 1", 1, 749600, 15000},
            {"Gold Brigadier General 2", 2, 764600, 17500},
            {"Gold Brigadier General 3", 3, 782100, 22500},
            {"Gold General 1", 1, 804600, 15000},
            {"Gold General 2", 2, 819600, 20000},
            {"Gold General 3", 3, 839600, 25000},

            {"Platinum Cadet 1", 1, 864600, 9750},
            {"Platinum Cadet 2", 2, 874350, 12500},
            {"Platinum Cadet 3", 3, 886850, 15000},
            {"Platinum Private 1", 1, 901850, 10000},
            {"Platinum Private 2", 2, 911850, 12500},
            {"Platinum Private 3", 3, 924350, 17500},
            {"Platinum Lance Corporal 1", 1, 941850, 12500},
            {"Platinum Lance Corporal 2", 2, 954350, 15000},
            {"Platinum Lance Corporal 3", 3, 969350, 17500},
            {"Platinum Corporal 1", 1, 986850, 12500},
            {"Platinum Corporal 2", 2, 999350, 15000},
            {"Platinum Corporal 3", 3, 1014350, 20000},
            {"Platinum Sergeant 1", 1, 1034350, 15000},
            {"Platinum Sergeant 2", 2, 1049350, 17500},
            {"Platinum Sergeant 3", 3, 1066850, 22500},
            {"Platinum Staff Sergeant 1", 1, 1089350, 15000},
            {"Platinum Staff Sergeant 2", 2, 1104350, 17500},
            {"Platinum Staff Sergeant 3", 3, 1121850, 22500},
            {"Platinum Gunnery Sergeant 1", 1, 1144350, 17500},
            {"Platinum Gunnery Sergeant 2", 2, 1161850, 20000},
            {"Platinum Gunnery Sergeant 3", 3, 1181850, 25000},
            {"Platinum Master Sergeant 1", 1, 1206850, 17500},
            {"Platinum Master Sergeant 2", 2, 1224350, 22500},
            {"Platinum Master Sergeant 3", 3, 1246850, 27500},
            {"Platinum Lieutenant 1", 1, 1274350, 20000},
            {"Platinum Lieutenant 2", 2, 1294350, 25000},
            {"Platinum Lieutenant 3", 3, 1319350, 30000},
            {"Platinum Captain 1", 1, 1349350, 22500},
            {"Platinum Captain 2", 2, 1374350, 25000},
            {"Platinum Captain 3", 3, 1404350, 32500},
            {"Platinum Major 1", 1, 1439350, 25000},
            {"Platinum Major 2", 2, 1464350, 27500},
            {"Platinum Major 3", 3, 1494350, 37500},
            {"Platinum Lt Colonel 1", 1, 1531850, 30000},
            {"Platinum Lt Colonel 2", 2, 1561850, 32500},
            {"Platinum Lt Colonel 3", 3, 1596850, 40000},
            {"Platinum Colonel 1", 1, 1636850, 27500},
            {"Platinum Colonel 2", 2, 1666850, 35000},
            {"Platinum Colonel 3", 3, 1706850, 45000},
            {"Platinum Brigadier General 1", 1, 1756850, 30000},
            {"Platinum Brigadier General 2", 2, 1786850, 37500},
            {"Platinum Brigadier General 3", 3, 1826850, 47500},
            {"Platinum General 1", 1, 1876850, 32500},
            {"Platinum General 2", 2, 1906850, 40000},
            {"Platinum General 3", 3, 1956850, 52500},

            {"Diamond Cadet 1", 1, 2019350, 20000},
            {"Diamond Cadet 2", 2, 2039350, 25000},
            {"Diamond Cadet 3", 3, 2064350, 32500},
            {"Diamond Private 1", 1, 2099350, 22500},
            {"Diamond Private 2", 2, 2124350, 27500},
            {"Diamond Private 3", 3, 2154350, 35000},
            {"Diamond Lance Corporal 1", 1, 2199350, 25000},
            {"Diamond Lance Corporal 2", 2, 2224350, 30000},
            {"Diamond Lance Corporal 3", 3, 2259350, 40000},
            {"Diamond Corporal 1", 1, 2309350, 27500},
            {"Diamond Corporal 2", 2, 2339350, 35000},
            {"Diamond Corporal 3", 3, 2379350, 42500},
            {"Diamond Sergeant 1", 1, 2434350, 30000},
            {"Diamond Sergeant 2", 2, 2464350, 35000},
            {"Diamond Sergeant 3", 3, 2504350, 47500},
            {"Diamond Staff Sergeant 1", 1, 2554350, 32500},
            {"Diamond Staff Sergeant 2", 2, 2584350, 40000},
            {"Diamond Staff Sergeant 3", 3, 2624350, 52500},
            {"Diamond Gunnery Sergeant 1", 1, 2684350, 35000},
            {"Diamond Gunnery Sergeant 2", 2, 2714350, 42500},
            {"Diamond Gunnery Sergeant 3", 3, 2754350, 55000},
            {"Diamond Master Sergeant 1", 1, 2814350, 37500},
            {"Diamond Master Sergeant 2", 2, 2854350, 45000},
            {"Diamond Master Sergeant 3", 3, 2904350, 60000},
            {"Diamond Lieutenant 1", 1, 2979350, 40000},
            {"Diamond Lieutenant 2", 2, 3019350, 50000},
            {"Diamond Lieutenant 3", 3, 3079350, 65000},
            {"Diamond Captain 1", 1, 3159350, 42500},
            {"Diamond Captain 2", 2, 3209350, 55000},
            {"Diamond Captain 3", 3, 3269350, 72500},
            {"Diamond Major 1", 1, 3354350, 50000},
            {"Diamond Major 2", 2, 3404350, 60000},
            {"Diamond Major 3", 3, 3464350, 80000},
            {"Diamond Lt Colonel 1", 1, 3559350, 55000},
            {"Diamond Lt Colonel 2", 2, 3619350, 70000},
            {"Diamond Lt Colonel 3", 3, 3689350, 85000},
            {"Diamond Colonel 1", 1, 3789350, 60000},
            {"Diamond Colonel 2", 2, 3849350, 72500},
            {"Diamond Colonel 3", 3, 3924350, 95000},
            {"Diamond Brigadier General 1", 1, 4024350, 65000},
            {"Diamond Brigadier General 2", 2, 4084350, 80000},
            {"Diamond Brigadier General 3", 3, 4164350, 100000},
            {"Diamond General 1", 1, 4264350, 72500},
            {"Diamond General 2", 2, 4334350, 85000},
            {"Diamond General 3", 3, 4424350, 100000},

            {"Onyx Cadet 1", 1, 4591850, 45000},
            {"Onyx Cadet 2", 2, 4636850, 55000},
            {"Onyx Cadet 3", 3, 4691850, 70000},
            {"Onyx Private 1", 1, 4764350, 50000},
            {"Onyx Private 2", 2, 4814350, 57500},
            {"Onyx Private 3", 3, 4876850, 77500},
            {"Onyx Lance Corporal 1", 1, 4951850, 52500},
            {"Onyx Lance Corporal 2", 2, 5004350, 65000},
            {"Onyx Lance Corporal 3", 3, 5066850, 82500},
            {"Onyx Corporal 1", 1, 5141850, 57500},
            {"Onyx Corporal 2", 2, 5199350, 70000},
            {"Onyx Corporal 3", 3, 5264350, 90000},
            {"Onyx Sergeant 1", 1, 5349350, 62500},
            {"Onyx Sergeant 2", 2, 5411850, 77500},
            {"Onyx Sergeant 3", 3, 5484350, 100000},
            {"Onyx Staff Sergeant 1", 1, 5584350, 70000},
            {"Onyx Staff Sergeant 2", 2, 5654350, 82500},
            {"Onyx Staff Sergeant 3", 3, 5734350, 100000},
            {"Onyx Gunnery Sergeant 1", 1, 5834350, 75000},
            {"Onyx Gunnery Sergeant 2", 2, 5909350, 90000},
            {"Onyx Gunnery Sergeant 3", 3, 5994350, 125000},
            {"Onyx Master Sergeant 1", 1, 6119350, 82500},
            {"Onyx Master Sergeant 2", 2, 6201850, 100000},
            {"Onyx Master Sergeant 3", 3, 6299350, 125000},
            {"Onyx Lieutenant 1", 1, 6424350, 90000},
            {"Onyx Lieutenant 2", 2, 6514350, 100000},
            {"Onyx Lieutenant 3", 3, 6614350, 150000},
            {"Onyx Captain 1", 1, 6744350, 100000},
            {"Onyx Captain 2", 2, 6844350, 125000},
            {"Onyx Captain 3", 3, 6969350, 150000},
            {"Onyx Major 1", 1, 7119350, 100000},
            {"Onyx Major 2", 2, 7219350, 125000},
            {"Onyx Major 3", 3, 7349350, 175000},
            {"Onyx Lt Colonel 1", 1, 7519350, 125000},
            {"Onyx Lt Colonel 2", 2, 7644350, 150000},
            {"Onyx Lt Colonel 3", 3, 7794350, 200000},
            {"Onyx Colonel 1", 1, 7994350, 150000},
            {"Onyx Colonel 2", 2, 8144350, 175000},
            {"Onyx Colonel 3", 3, 8319350, 200000},
            {"Onyx Brigadier General 1", 1, 8519350, 150000},
            {"Onyx Brigadier General 2", 2, 8669350, 175000},
            {"Onyx Brigadier General 3", 3, 8844350, 225000},
            {"Onyx General 1", 1, 9044350, 150000},
            {"Onyx General 2", 2, 9194350, 175000},
            {"Onyx General 3", 3, 9379350, 250000},

            {"HERO", 0, 9319350, 0}
    };

    return ranks;
}

// Function to find the index of the starting rank
int findStartIndex(const std::vector<Rank>& ranks, const std::string& startRank) {
    for (int i = 0; i < ranks.size(); ++i) {
        if (ranks[i].name == startRank) {
            return i;
        }
    }
    return -1; // If the rank is not found
}

// Function to calculate the total XP required from the starting rank to the maximum rank
int calculateTotalXP(const std::vector<Rank>& ranks, int startIndex) {
    int totalXP = 0;
    for (int i = startIndex; i < ranks.size(); ++i) {
        totalXP += ranks[i].xpToNextRank;
    }
    return totalXP;
}
