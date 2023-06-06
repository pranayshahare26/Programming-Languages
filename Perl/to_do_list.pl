#!/usr/bin/perl
my @todo_list;
sub add_task 
{
    print "Enter the task to add: ";
    my $task = <>;
    chomp($task);
    push(@todo_list, $task);
    print "Task added successfully!\n";
}
sub delete_task 
{
    print "Enter the index of the task to delete: ";
    my $index = <STDIN>;
    chomp($index);
    if ($index >= 0 && $index <= $#todo_list) 
    {
        splice(@todo_list, $index, 1);
        print "Task deleted successfully!\n";
    } else 
    {
        print "Invalid index! Please try again.\n";
    }
}
sub view_list 
{
    print "To-Do List:\n";
    for my $i (0..$#todo_list) 
    {
        print "$i. $todo_list[$i]\n";
    }
}
while(1) 
{
    print "\nEnter a number to select an action:\n";
    print "1. Add a task\n";
    print "2. Delete a task\n";
    print "3. View the to-do list\n";
    print "4. Exit\n";
    my $choice = <STDIN>;
    chomp($choice);
    if ($choice == 1) 
    {
        add_task();
    } elsif ($choice == 2) 
    {
        delete_task();
    } elsif ($choice == 3) 
    {
        view_list();
    } elsif ($choice == 4) 
    {
        exit;
    } else 
    {
        print "Invalid choice! Please try again.\n";
    }
}