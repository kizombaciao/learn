<?php

class Lock 
{
	protected $isLocked;

	public function lock()
	{
		$this->isLocked = true;
	}

	public function unlock()
	{
		$this->isLocked = false;
	}

	public function isLocked()
	{
		return $this->isLocked;
	}

}


class Chest
{
	protected $lock;
	protected $isClosed;

	public function __construct($lock)
	{
		$this->lock = $lock;
	}

	public function close($lock = true)	// makes it optional
		if ($lock == true)
		{
			$this->lock->lock(); // ???
		}

		$this->isClosed = true;
		echo 'Closed';
	}

	public function open()
	{
		if ($this->lock->isLocked())
		{
			$this->lock->unlock();
		}
		$this->isClosed = false;
		echo 'Opened';
	}

	public function isClosed()
	{
		return $this->isClosed;
	}
}

$chest = new Chest(new Lock);
$chest->close();
$chest->open();


/*
https://code.tutsplus.com/tutorials/dependency-injection-in-php--net-28146
https://coderoncode.com/posts/dependency-injection-in-php

*/