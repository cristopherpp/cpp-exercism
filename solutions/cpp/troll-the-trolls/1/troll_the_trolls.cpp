namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum AccountStatus {
        troll,
        guest,
        user,
        mod,
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum Action {
        read,
        write,
        remove,
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus accountOne, AccountStatus accountTwo)
    {
        if (accountOne == AccountStatus::troll)
        {
            return accountTwo == AccountStatus::troll;
        }
        return true;
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action action, AccountStatus status) 
    {
        switch (status)
            {
                case AccountStatus::guest:
                    return action ==  Action::read;
                    break;
                case AccountStatus::user:
                    return action == Action::read || action == Action::write;
                    break;
                case AccountStatus::mod:
                    return action == Action::read || action == Action::write || action == Action::remove;
                    break;
                case AccountStatus::troll:
                    return action == Action::read || action == Action::write;
                    break;
                default:
                    return false;
                    break;
            }
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus accountOne, AccountStatus accountTwo)
    {
        if (accountOne == AccountStatus::guest || accountTwo == AccountStatus::guest) {
            return false;
        }
        if (accountOne == AccountStatus::troll && accountTwo != AccountStatus::troll) {
            return false;
        }
        if (accountOne != AccountStatus::troll && accountTwo == AccountStatus::troll) {
            return false;
        }
        return true;
    }

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus accountOne, AccountStatus accountTwo)
    {
        if (accountOne > accountTwo)
        {
            return true;
        }
        return false;
    }

}  // namespace hellmath