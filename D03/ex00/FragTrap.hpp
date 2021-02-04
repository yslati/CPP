#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
// #include <cmath>

class FragTrap {
	private:
		int				_HitPoints;
		static int		_MaxHitPoints;
		int				_EnergyPoints;
		static int		_MaxEnergyPoints;
		int				_Level;
		std::string		_name;
		static int		_MeleeAttackDamage;
		static int		_RangedAttackDamage;
		static int		_ArmorDamageReduction;

		void	Funzerker(std::string const & target);
		void	MeatUnicycle(std::string const & target);
		void	Blightbot(std::string const & target);
		void	Mechromagician(std::string const & target);
		void	Miniontrap(std::string const & target);

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & src);
		~FragTrap(void);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	vaulthunter_dot_exe(std::string const & target);

		int		get_HitPoints();
		void	set_hitPoints(int point);
};

#endif
