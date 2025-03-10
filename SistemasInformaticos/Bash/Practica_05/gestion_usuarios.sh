if ! groups "$USER" | grep -q '\bsysadmin\b'; then
    echo "No tienes permisos para ejecutar este script. Debes ser miembro del grupo 'sysadmin'."
    exit 1
fi

echo "¡Bienvenido, miembro del grupo sysadmin!"
echo -e "Escoge una opción:\n1. Crear usuario y asignarlo a un grupo \n2. Eliminar un usuario\n3. Ver información de un usuario."

read opcion

if [ $opcion -eq 1 ]; then

echo "Elige un grupo: sysadmin, dev_admin, devs, office"

read grupos

echo "Ingrese el nombre del usuario"

read usuario

sudo useradd -m -s /bin/bash -G "$grupos" "$usuario"

sudo passwd "$usuario"

groups "$usuario"

elif [ $opcion -eq 2 ]; then

echo "Ingrese el nombre del usuario a eliminar"

read usuario

sudo userdel -r "$usuario"

echo "Usuario $usuario eliminado."

elif [ "$opcion" -eq 3 ]; then

echo "Ingrese el nombre del usuario"

read usuario

id "$usuario"

else

echo"opción no válida"

fi
