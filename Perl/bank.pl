#!/usr/bin/perl
my %bank_accounts = ();
sub create_account 
{
  print "Enter account name: ";
  my $acc_name = <>;
  chomp($acc_name);
  print "Enter initial deposit amount: ";
  my $init_deposit = <>;
  chomp($init_deposit);
  $bank_accounts{$acc_name} = $init_deposit;
  print "Account created successfully!\n";
}
sub deposit 
{
    print "Enter account name: ";
    my $acc_name = <>;
    chomp($acc_name);
    print "Enter deposit amount: ";
    my $deposit_amount = <>;
    chomp($deposit_amount);
    $bank_accounts{$acc_name} += $deposit_amount;
    print "Deposit successful!\n";
}
sub withdraw 
{
    print "Enter account name: ";
    my $acc_name = <>;
    chomp($acc_name);
    print "Enter withdrawal amount: ";
    my $withdraw_amount = <>;
    chomp($withdraw_amount);
    if($withdraw_amount > $bank_accounts{$acc_name}) 
    {
    print "Insufficient funds!\n";
    } 
    else 
    {
        $bank_accounts{$acc_name} -= $withdraw_amount;
        print "Withdrawal successful!\n";
    }
}
sub check_balance 
{
    print "Enter account name: ";
    my $acc_name = <>;
    chomp($acc_name);
    print "Account balance: ".$bank_accounts{$acc_name}."\n";
}
while(1) 
{
    print "\nEnter a number to select an action:\n";
    print "1. Create account\n";
    print "2. Deposit money\n";
    print "3. Withdraw money\n";
    print "4. Check account balance\n";
    print "5. Exit\n";
    my $action = <>;
    chomp($action);
    if($action == 1) 
    {
        create_account();
    } 
    elsif($action == 2) 
    {
        deposit();
    } 
    elsif($action == 3) 
    {
        withdraw();
    } 
    elsif($action == 4) 
    {
        check_balance();
    } 
    elsif($action == 5) 
    {
        exit;
    } 
    else 
    {
        print "Invalid action! Please try again.\n";
    }
}

