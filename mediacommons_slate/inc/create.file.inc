<?php

function mediacommons_slate_add_file ( $path ) {

	$pathinfo = pathinfo ( $path ) ;

	$handle = fopen ( $path, 'r' ) ;

	$file = file_save_data ( $handle, 'public://' . uniqid() . '.' . $pathinfo['extension'] ) ;

	fclose ( $handle ) ;

	return $file ;

}



