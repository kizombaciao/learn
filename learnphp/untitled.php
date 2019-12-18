<?php

function user_create(string $user, string $pwd, string $email, bool $isadmin)
{
    if (strlen($user) > 45 || strlen($user) < 5)
        $err[] = 'pseudo';
    if (filter_var($email, FILTER_VALIDATE_EMAIL) == FALSE)
        $err[] = 'email';

    if (strlen($pwd) < 7)
        $err[] = 'password';
        else
	{
		if ($isadmin)
			$pwd = ($pwd); // ???
		else
			$pwd = ($pwd); // ???
	}

    if (!empty($err))
            return ($err);
    
    $list = array(array($user, $pwd, $email, $isadmin));
            
      
    $file = fopen("ttt.csv","w");
      
    foreach ($list as $line) {
        fputcsv($file, $line);
    }
      
    fclose($file);

}

?>


user_create("aaaaaaaa", "bbbbbbbbbb", "ccc@gmail.com", 1)