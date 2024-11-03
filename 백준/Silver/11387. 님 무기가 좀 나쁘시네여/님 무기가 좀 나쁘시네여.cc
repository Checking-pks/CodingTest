#include <iostream>

using namespace std;

class stat
{
    private:
        double attack;
        double power;
        double criticalChance;
        double criticalPower;
        double attackSpeed;
    
    public:
        stat()
        {
            cin >> attack >> power >> criticalChance >> criticalPower >> attackSpeed;
        }
    
        stat(double attack, double power, double criticalChance, double criticalPower, double attackSpeed) :
        attack(attack), power(power), 
        criticalChance(criticalChance), criticalPower(criticalPower),
        attackSpeed(attackSpeed) { }
    
        double GetCombatPower()
        {
            double cc = criticalChance;
            if (cc > 100) cc = 100;
            
            
            return attack * (1 + power / 100) *
                ((1 - (cc * 0.01)) + (cc * 0.01) * criticalPower * 0.01) *
                (1 + attackSpeed * 0.01);
        }
        
        stat operator+(stat &ref)
        {
            return stat(
                attack          + ref.attack,
                power           + ref.power,
                criticalChance  + ref.criticalChance,
                criticalPower   + ref.criticalPower,
                attackSpeed     + ref.attackSpeed
            );
        }
        
        stat operator-(stat &ref)
        {
            return stat(
                attack          - ref.attack,
                power           - ref.power,
                criticalChance  - ref.criticalChance,
                criticalPower   - ref.criticalPower,
                attackSpeed     - ref.attackSpeed
            );
        }
};

int main()
{
    stat crii, pabu, criiWeapon, pabuWeapon;
    
    double criiBefore = crii.GetCombatPower();
    double pabuBefore = pabu.GetCombatPower();
    
    crii = crii + pabuWeapon - criiWeapon;
    pabu = pabu + criiWeapon - pabuWeapon;
    
    double criiAfter = crii.GetCombatPower();
    double pabuAfter = pabu.GetCombatPower();
    
    if (criiBefore < criiAfter) cout << "+\n";
    else if (criiBefore > criiAfter) cout << "-\n";
    else cout << "0\n";
    
    if (pabuBefore < pabuAfter) cout << "+";
    else if (pabuBefore > pabuAfter) cout << "-";
    else cout << "0";
}