    if (runTime.writeTime())
    {
        volVectorField gradF(fvc::grad(F));

        volScalarField gradFx
        (
            IOobject
            (
                "gradFx",
                runTime.timeName(),
                mesh,
                IOobject::NO_READ,
                IOobject::AUTO_WRITE
            ),
            gradF.component(vector::X)
        );

        volScalarField gradFy
        (
            IOobject
            (
                "gradFy",
                runTime.timeName(),
                mesh,
                IOobject::NO_READ,
                IOobject::AUTO_WRITE
            ),
            gradF.component(vector::Y)
        );

        volScalarField gradFz
        (
            IOobject
            (
                "gradFz",
                runTime.timeName(),
                mesh,
                IOobject::NO_READ,
                IOobject::AUTO_WRITE
            ),
            gradF.component(vector::Z)
        );


        runTime.write();
    }
